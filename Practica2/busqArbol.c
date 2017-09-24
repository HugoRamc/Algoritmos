/*	Titulo: Algoritmo de busqueda arbol binario
	Descripción: Este programa recibe dos numeros enteros y un arreglo de enteros desordenados del tamaño del segundo 
		entero introducido
		El primer numero entero introducido será el mismo que se busque durante la ejecución de este algoritmo
		Este algoritmo puede ser utilizado para cuando el arreglo de los numeros enteros estan o no ordenados, 
       	 	Se realiza la contrucción de un arbol B y despues se hace un recorrido por cada nodo del árbol, hasta encontrar 		el numero buscado
		o en su defecto se llega a un elemento nulo donde no se encuentra el elemento a buscar
	Fecha:23 - septiembre - 2017
	Versión: 1.1
	Autor: Hugo Enrique Ramírez Centeno 	
*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//estructura para manejar el control 
struct elemento{
	int dato;
	struct elemento *ptrDer;
	struct elemento *ptrIzq;
};


//esta función recibe como parametro la raiz del arbol, y el numero a buscar
void busquedaArbol(struct elemento *raiz,int numBusqueda){
	//printf("busqueda en el arbol\n");
	int bandera = 0;//para saber si encontró el numero
	struct elemento *aux;
	aux = raiz;
	
	while(aux!=NULL){//hasta no llegar a un nodo hoja
		if(aux->dato==numBusqueda){//compara si el nodo del arbol es igual al elemento buscado
			bandera = 1;
			printf("Numero %d encontrado\n",numBusqueda );
			break;//deja de buscar
		}
		else if(aux->dato > numBusqueda){//si numBusqueda es menor, ir al subarbol izquierdo a partir de ese nodo
			aux = aux->ptrIzq;
		}
		else{
			aux = aux->ptrDer;//si numBusqueda es mayor, ir al subarbol derecho a partir de ese nodo
		}
	}

	if(bandera == 0){
		printf("Numero no encontrado\n");
	}
}




int main(int argc, char const *argv[]){
	//validamos que el numero de parametros sean 
	if(argc >= 3){
		double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos

		int *arr;//variable para el arreglo de los numeros ordenados
		int numBusqueda; //variable para almacenar el numero a buscar
		int n;//variable para indicar el taamño del arreglo

		//asignacion de variables
		n = atoi(argv[2]);
		numBusqueda = atoi(argv[1]);
		arr = (int *)malloc(sizeof(int)*n);//reservamos memoria para el tamaño del arreglo

		printf("n= %d \n",n);
		//llenamos el arreglo
		for(int i=0;i<n;++i){
			scanf("%d",&arr[i]);
		}

		
		//Creacion del arbol
		struct elemento *raiz =NULL;
		//Creamos un nodo auxiliar para recorrer el arbol y otro para almacenar un nuevo dato
		struct elemento *aux;
		struct elemento *aux2;
		for(int i=0;i<n;i++){		
			aux2=(struct elemento *)malloc(sizeof(struct elemento));
			aux2->dato=arr[i];
			aux2->ptrDer=NULL;
			aux2->ptrIzq=NULL;	
			
			//Igualamos nuestro auxiliar con la raiz del arbol, para empezar a acomodar el arbol
			aux=raiz;
			
			//Buscamos el lugar del auxiliar 2 en el arbol
			while(aux!=NULL){
			//Si el dato es mayor que el auxiliar, se ira a una rama derecha, de lo contrario, se ira a la izquierda
				if(aux->dato<aux2->dato){
			//Si el auxiliar no es nulo, se recorrera al siguiente nodo, de lo contrario, se igualara en esa posicion 
					if(aux->ptrDer!=NULL){
						aux=aux->ptrDer;//va al siguiente nodo
					}
					else{
						aux->ptrDer=aux2;
						break;
					}
				}
				else{
					//Si el auxiliar no es nulo, se recorrera al siguiente nodo, de lo contrario, se igualara en esa posicion 
					if(aux->ptrIzq!=NULL){
						aux=aux->ptrIzq;//va al siguiente nodo
					}
					else{
						aux->ptrIzq=aux2;
						break;
					}
				}
			}
			//Si nuestro auxiliar es nulo, entonces nuestro segundo auxiliar sera nuestra raiz
			if(aux==NULL){
				raiz=aux2;
			}
		}


		//tiempo
		uswtime(&utime0, &stime0, &wtime0);
		//Se llama a la funcion de busqueda
		busquedaArbol(raiz,numBusqueda);
		//tiempo
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

	}
	else{
		printf("Faltan argumentos de ejecución\n");
	}
	return 0;
}
