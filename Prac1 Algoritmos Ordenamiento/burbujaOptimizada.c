/*
	Autor: Giselle Flores Tepatl
		 	Miguel García Cebada
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tiempo.h"

//La funcion recibe como argumento un apuntador a arreglo de enteros, y el numero de elementos a ordenar maximo 10,000,000
void burbujaOptimizada(int *arrNums, int n){
	char cambios[] = "si";
	//Si no hay cambios se detiene for
	for(int i=1; (i<n && (strcmp(cambios,"si")==0)); i++){
		strcpy(cambios, "no");
		for(int j=0; j<(n-i); j++){
			//Compara el primer elemento, con el siguiente y hace el cambio del menor
			if(arrNums[j] > arrNums[j+1]){
				int temp = arrNums[j];
				arrNums[j] = arrNums[j+1];
				arrNums[j+1] = temp;
				strcpy(cambios, "si");
			}
		}
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
		burbujaOptimizada(arrNums,n);

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
