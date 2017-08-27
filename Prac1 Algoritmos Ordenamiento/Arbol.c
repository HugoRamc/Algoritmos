#include <stdio.h>
#include <stdlib.h>

void ordenar();
void infijo();

/*Se crea la estructura que dara forma al arbol, conteniendo el dato y sus hojas*/
struct  elemento
{
	int dato;
	struct elemento *ptrDer;
	struct elemento *ptrIzq;
};

int main(int argc, char const *argv[])
{
	/*Validamos primero que contengan mas de dos argumentos para verificar la n de entrada*/
	
	if(argc>=2)
	{
		/*Creamos la raiz del arbol*/
		struct elemento *raiz =NULL;
		
		//utilizamos el segundo argumento como la n que va a introducir el usuario
		int lim = atoi(argv[1]);
		
		//llenamos el arbol, recuerden que utilizamos el redireccionamiento de la entrada y salida estandar de linux
		// < para entrada
		// > salida sobreescribiendo
		// >> salida haciendo append
		
		int i;
		for(i=0;i<lim;++i)
		{
			//Creamos un nodo auxiliar para recorrer el arbol y otro para almacenar un nuevo dato
			struct elemento *aux;
			struct elemento *aux2;
			
			aux2=(struct elemento *)malloc(sizeof(struct elemento));
			scanf("%d",&aux2->dato);
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
    printf("%d \n",raiz->dato);
    if(raiz->ptrDer!=NULL)
    {
        infijo(raiz->ptrDer);
    }
}
