/*
	Titulo: Algoritmo de busqueda lineal"
	Descripción: Este programa recibe un dos numero enteros y un arreglo de enteros ordenados de manera ascendente del tamaño del segundo 
				 entero introducido, el primer numero entero introducido será el mismo que se busque durante la ejecución de este algoritmo
				 La busqueda lineal será recorriendo cada elemento del arreglo y comparandolo así hasta obtener un resultado


	Fecha:23 - septiembre - 2017
	Versión: 1.1
	Autor: Hugo Enrique Ramírez Centeno 

	
*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//esta función recibe como parametro el arreglo de enteros, el tamaño y el numero a buscar
void busquedaLineal(int *arr,int n,int numBusqueda){
	//variable para controlar si encuentra el numero
	int bandera = 0;	
	for(int i=0;i<n;++i){
		if(arr[i]==numBusqueda){
			bandera = 1;
			printf("Numero encontrado en el arreglo\n");
			
		}
	}

	//condicion para verificar que al menos una vez haya entrado en la condicion del ciclo
	if(bandera==0){
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


		busquedaLineal(arr,n,numBusqueda);



	}else{
		printf("Faltan argumentos de ejecución\n");

	}





	return 0;
}
