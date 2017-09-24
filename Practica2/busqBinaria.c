/*	Titulo: Algoritmo de busqueda binaria
	Descripción: Este programa recibe dos numero enteros y un arreglo de enteros ordenados de manera ascendente del tamaño 				del segundo entero introducido
		El primer numero entero introducido será el mismo que se busque durante la ejecución de este algoritmo
		La busqueda binaria se realiza reduciendo el espacio de busqueda de los numeros, este algoritmo funciona 			solamente si los números se encuentran ordenados.
	Fecha:23 - septiembre - 2017
	Versión: 1.1
	Autor: Hugo Enrique Ramírez Centeno 	
*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//esta función recibe como parametro el arreglo de enteros, el tamaño del arreglo y el numero a buscar
void busquedaBinaria(int *arr,int n,int numBusqueda){
	int inferior=0;//indice inferior
	int superior=n;//indice superior
	int centro;//indice mitad o centro
	int bandera = 0;//para saber si encontro el numero

	//
	while((inferior <= superior)){
		//obtenemos la posicion de la mitad del arreglo
		centro = (inferior + superior)/2;

		//verificamos si el arreglo en esa posicion (centro o mitad) es el buscado 
		if(arr[centro] == numBusqueda){
			printf("Numero %d encontrado en el arreglo\n",arr[centro]);
			bandera = 1;
			break;//deja de buscar 
		}//verificamos en que mitad puede estar el numero a buscar
		else if(arr[centro] > numBusqueda){//se toma mitad izquierda por que el numero buscado es menor que el centro
			superior = centro-1;//se modifica indice superior

		}
		else{//se toma mitad derecha por que el numero buscado es mayor que el centro
			inferior = centro+1;//se modifica indice inferior
		}
	}

	if(bandera == 0){
		printf("Numero %d no encontrado\n",numBusqueda);

	}
}




int main(int argc, char const *argv[]){
	//validamos que el numero de parametros sean 
	if(argc >= 3){
		double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos

		int *arr;//variable para el arreglo de los numeros ordenados
		int numBusqueda; //variable para almacenar el numero a buscar
		int n;//variable para indicar el tamaño del arreglo

		//asignacion de variables
		n = atoi(argv[2]);
		numBusqueda = atoi(argv[1]);
		arr = (int *)malloc(sizeof(int)*n);//reservamos memoria para el tamaño del arreglo

		//llenamos el arreglo, ya estan ordenados
		for(int i=0;i<n;++i){
			scanf("%d",&arr[i]);
		}

		//tiempo
		uswtime(&utime0, &stime0, &wtime0);
		//Se llama a la funcion de busqueda
		busquedaBinaria(arr,n,numBusqueda);
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
