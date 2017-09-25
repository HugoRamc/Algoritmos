/*	Titulo: Algoritmo de busqueda lineal
	Descripción: Este programa recibe dos numeros enteros y un arreglo de enteros ordenados de manera ascendente del tamaño 			del segundo entero introducido.
		 El primer numero entero introducido será el mismo que se busque durante la ejecución de este algoritmo
	La busqueda lineal será recorriendo cada elemento del arreglo y comparandolo así hasta obtener un resultado
	Fecha:23 - septiembre - 2017
	Versión: 1.1
	Autor: Hugo Enrique Ramírez Centeno 
	
*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//Esta función recibe como parametro el arreglo de enteros, el tamaño de busqueda y el numero a buscar
void busquedaLineal(int *arr,int n,int numBusqueda){
	//variable para controlar si encuentra el numero
	int bandera = 0;	
	for(int i=0;i<n;++i){
		if(arr[i]==numBusqueda){
			bandera = 1;
			printf("Numero %d encontrado en el arreglo\n", numBusqueda);
			break;
		}
	}

	//condicion para verificar que al menos una vez haya entrado en la condicion del ciclo
	if(bandera==0){
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
		numBusqueda = atoi(argv[1]);		
		n = atoi(argv[2]);
		arr = (int *)malloc(sizeof(int)*n);//reservamos memoria para el tamaño del arreglo

		printf("n= %d \n",n);
		//llenamos el arreglo, ya estan ordenados
		for(int i=0;i<n;++i){
			scanf("%d",&arr[i]);
		}

		//tiempo
		uswtime(&utime0, &stime0, &wtime0);
		//Se llama a la funcion de busqueda
		busquedaLineal(arr,n,numBusqueda);
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
