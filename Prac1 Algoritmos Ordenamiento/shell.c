#include <stdio.h>
#include <stdlib.h>
#include "tiempo.h"

void ordenaShell(int *arrNums,int n){
	int k =  n/2;
	int v;
	int j;
	while(k>=1){
		for(int i=k;i<=n;++i){
			v = arrNums[i];
			j = i - k;

			while(j>=0 && arrNums[j] > v){
				arrNums[j+k] = arrNums[j];

				j-=k;
			} 
			arrNums[j+k]=v;
			//printf("%d\n",v);
		}
		
		k/=2;

	}
	
}


int main(int argc, char const *argv[])
{
	double utime0, stime0, wtime0,utime1, stime1, wtime1; //Variables para medición de tiempos
	/*Validamos primero que contengan mas de dos argumentos para verificar la n de entrada*/
	if(argc>=2){

		//utilizamos el segundo argumento como la n que va a introducir el usuario
		int lim = atoi(argv[1]);

		//reservamos memoria para el tamaño del arreglo, está pensado para aguantar los 10,000,000
		int *arrNums = (int *)malloc(sizeof(int)*lim);

		//llenamos el arreglo, recuerden que utilizamos el redireccionamiento de la entrada y salida estandar de linux
		// < para entrada
		// > salida sobreescribiendo
		// >> salida haciendo append

		for(int i=0;i<lim;++i){
			scanf("%d",&arrNums[i]);
		}

		//ejecutamos la funcion

		uswtime(&utime0, &stime0, &wtime0);
		ordenaShell(arrNums,lim);
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