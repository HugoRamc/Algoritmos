/*
	Titulo: Algoritmo de busqueda arbol binario"
	Descripción: Este programa recibe un dos numero enteros y un arreglo de enteros ordenados de manera ascendente del tamaño del segundo 
				 entero introducido, el primer numero entero introducido será el mismo que se busque durante la ejecución de este algoritmo
				 este algoritmo puede ser utilizado para cuando el arreglo de los numeros enteros estan o no ordenados, 
				 Se realiza la contrucción de un arbol B y despues se hace un recorrido por cada nodo del árbol, hasta encontral el numero buscado
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


//esta función recibe como parametro el arreglo de enteros, el tamaño del arreglo y el numero a buscar
void busquedaArbol(struct elemento *raiz,int numBusqueda){
	//printf("busqueda en el arbol\n");
	int bandera = 0;
	struct elemento *aux;
	aux = raiz;
	
	while(aux!=NULL){
		if(aux->dato==numBusqueda){
			bandera = 1;
			printf("Numero %d encontrado\n",numBusqueda );
			break;
		}else if(aux->dato > numBusqueda){
			aux = aux->ptrIzq;
		}else{
			aux = aux->ptrDer;
		}
	}

	if(bandera == 0){
		printf("Numero no encontrado\n");
	}

}




int main(int argc, char const *argv[])
{
	//validamos que el numero de parametros sean 
	if(argc >= 3){
		int *arr;//variable para el arreglo de los numeros ordenados
		int numBusqueda; //variable para almacenar el numero a buscar
		int n;//variable para indicar el taamño del arreglo

		//asignacion de variables
		n = atoi(argv[2]);
		numBusqueda = atoi(argv[1]);
		arr = (int *)malloc(sizeof(int)*n);

		for(int i=0;i<n;++i){
			scanf("%d",&arr[i]);
		}

		//creacion del arbol
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
						aux=aux->ptrDer;
					}
					else{
						aux->ptrDer=aux2;
						break;
					}
				}
				else{
					//Si el auxiliar no es nulo, se recorrera al siguiente nodo, de lo contrario, se igualara en esa posicion 
					if(aux->ptrIzq!=NULL){
						aux=aux->ptrIzq;
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

		//busqueda del numero
		busquedaArbol(raiz,numBusqueda);

		



	}else{
		printf("Faltan argumentos de ejecución\n");

	}





	return 0;
}
