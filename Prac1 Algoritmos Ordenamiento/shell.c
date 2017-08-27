#include <stdio.h>
#include <stdlib.h>

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

	for(int i=0;i<n;++i){
		printf("%d\n",arrNums[i]);
	}

	
}


int main(int argc, char const *argv[])
{
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

		ordenaShell(arrNums,lim);


	}else{
		printf("Faltan argumentos\n");
	}




	return 0;
}