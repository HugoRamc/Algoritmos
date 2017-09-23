/*
	Titulo: Algoritmo de busqueda binaria"
	Descripción: Este programa recibe un dos numero enteros y un arreglo de enteros ordenados de manera ascendente del tamaño del segundo 
				 entero introducido, el primer numero entero introducido será el mismo que se busque durante la ejecución de este algoritmo
				 la busqueda binaria se realiza reduciendo el espacio de busqueda de los numeros, este algoritmo funciona solamente si los 
				 números se encuentran ordenados.


	Fecha:23 - septiembre - 2017
	Versión: 1.1
	Autor: Hugo Enrique Ramírez Centeno 

	
*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//esta función recibe como parametro el arreglo de enteros, el tamaño del arreglo y el numero a buscar
void busquedaBinaria(int *arr,int n,int numBusqueda){
	int inferior=0;
	int superior=n;
	int centro;
	int bandera = 0;

	//
	while((inferior <= superior)){
		//obtenemos la posicion de la mitad del arreglo
		centro = (inferior + superior)/2;

		//verificamos si el arreglo en esa posicion es el indicado
		if(arr[centro] == numBusqueda){
			printf("numero encontrado: %d\n",arr[centro]);
			bandera = 1;
			break;

		//verificamos en que mitad puede estar el numero a buscar 
		}else if(arr[centro] > numBusqueda){
			superior = centro-1;

		}else{
			inferior = centro+1;
		}
		

	}

	if(bandera == 0){
		printf("Numero %d no encontrado\n",numBusqueda);

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


		busquedaBinaria(arr,n,numBusqueda);



	}else{
		printf("Faltan argumentos de ejecución\n");

	}





	return 0;
}
