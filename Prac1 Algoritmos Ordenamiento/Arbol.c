#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

void ordenar();
void infijo();

/*Se crea la estructura que dara forma al arbol, conteniendo el dato y sus hojas*/
struct  elemento
{
	int dato;
	struct elemento *ptrDer;
	struct elemento *ptrIzq;
};

int *arrNums;
int contador=0;

int main(int argc, char const *argv[])
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	/*Validamos primero que contengan mas de dos argumentos para verificar la n de entrada*/
	
	if(argc>=2)
	{
		//utilizamos el segundo argumento como la n que va a introducir el usuario
		int lim = atoi(argv[1]);
		
		//reservamos memoria para el tamaño del arreglo, está pensado para aguantar los 10,000,000
		arrNums = (int *)malloc(sizeof(int)*lim);
		
		//Contador
		int i=0;
		
		//llenamos el arreglo
		for(i=0;i<lim;i++)
		{
			scanf("%d",&arrNums[i]);
			//printf("%d \n",arrNums[i]);
		}
		
		//Iniciar el conteo del tiempo para las evaluaciones de rendimiento
		uswtime(&utime0, &stime0, &wtime0);
		
		/*Creamos la raiz del arbol*/
		struct elemento *raiz =NULL;
		
		//Creamos un nodo auxiliar para recorrer el arbol y otro para almacenar un nuevo dato
		struct elemento *aux;
		struct elemento *aux2;
		
		for(i=0;i<lim;i++)
		{
			
			
			aux2=(struct elemento *)malloc(sizeof(struct elemento));
			aux2->dato=arrNums[i];
			aux2->ptrDer=NULL;
			aux2->ptrIzq=NULL;	
			
			//Igualamos nuestro auxiliar con la raiz del arbol, para empezar a acomodar el arbol
			aux=raiz;
			
			//Buscamos el lugar del auxiliar 2 en el arbol
			while(aux!=NULL)
			{
				//Si el dato es mayor que el auxiliar, se ira a una rama derecha, de lo contrario, se ira a la izquierda
				if(aux->dato<aux2->dato)
				{
					//Si el auxiliar no es nulo, se recorrera al siguiente nodo, de lo contrario, se igualara en esa posicion 
					if(aux->ptrDer!=NULL)
					{
						aux=aux->ptrDer;
					}
					else
					{
						aux->ptrDer=aux2;
						break;
					}
				}
				else
				{
					//Si el auxiliar no es nulo, se recorrera al siguiente nodo, de lo contrario, se igualara en esa posicion 
					if(aux->ptrIzq!=NULL)
					{
						aux=aux->ptrIzq;
					}
					else
					{
						aux->ptrIzq=aux2;
						break;
					}
				}
			}
			//Si nuestro auxiliar es nulo, entonces nuestro segundo auxiliar sera nuestra raiz
			if(aux==NULL)
			{
				raiz=aux2;
			}
		}

		//Imprimimos en infijo el arbol (de menor a mayor)
		infijo(raiz);
		
		
		//Evaluar los tiempos de ejecución 
		uswtime(&utime1, &stime1, &wtime1);

		//Cálculo del tiempo de ejecución del programa
		printf("\n");
		printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
		printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
		printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
		printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
		printf("\n");
	
		//Mostrar los tiempos en formato exponecial
		printf("\n");
		printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
		printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
		printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
		printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
		printf("\n");
		
		//Impresion final
		for(i=0;i<lim;++i)
		{
			printf("%d \n",arrNums[i]);
		}
	}
	else
	{
		printf("Faltan argumentos\n");
	}

    return 0;
}

//Funcion recursiva para impresion en infijo
void infijo(struct elemento *raiz)
{
    if(raiz->ptrIzq!=NULL)
    {
        infijo(raiz->ptrIzq);
    }
    arrNums[contador]=raiz->dato;
	contador++;
    if(raiz->ptrDer!=NULL)
    {
        infijo(raiz->ptrDer);
    }
}
