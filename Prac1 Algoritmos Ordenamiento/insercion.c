/*
	Autor: Giselle Flores Tepatl

*/

#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

//La funcion recibe como argumento un apuntador a arreglo de enteros, y el numero de elementos a ordenar maximo 10,000,000
void insercion(int *arrNums, int n){
	for(int i=0;i<=n-1;i++){
		int j = i;
		int temp = arrNums[i];
		//Si el elemento j es mayor que su consecutivo, hace el cambio del mayor en la siguiente posicion
		while(j>0 && temp<arrNums[j-1]){
			arrNums[j] = arrNums[j-1];
			j--;
		}
		arrNums[j]=temp;	
	}

	//for(int i=0;i<n;i++){
	//	printf("%d\n",arrNums[i]);	
	//}
}

int main(int argc, char const *argv[]){
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos

	/*Validamos primero que contengan mas de dos argumentos para verificar la n de entrada*/
	if(argc>=2){
		//utilizamos el segundo argumento como la n que va a introducir el usuario
		int n = atoi(argv[1]);

		//reservamos memoria para el tamaño del arreglo, está pensado para aguantar los 10,000,000
		int *arrNums = (int *)malloc(sizeof(int)*n);

		//llenamos el arreglo
		for(int i=0;i<n;++i){
			scanf("%d",&arrNums[i]);
		}

		//Iniciar el conteo del tiempo para las evaluaciones de rendimiento
		uswtime(&utime0, &stime0, &wtime0);

		//ejecutamos la funcion
		insercion(arrNums,n);

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

	}else{
		printf("Faltan argumentos\n");
	}
	return 0;
}
