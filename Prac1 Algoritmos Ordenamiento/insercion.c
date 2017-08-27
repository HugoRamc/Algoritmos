#include <stdio.h>
#include <stdlib.h>

//La funcion recibe como argumento un apuntador a arreglo de enteros, y el numero de elementos a ordenar maximo 10,000,000
void insercion(int *arrNums, int n){
	for(int i=1;i<n;i++){
		int temp = arrNums[i];
		int j = i-1;
		//Si el elemento j es mayor que su consecutivo, hace el cambio del mayor en la siguiente posicion
		while(arrNums[j]>temp && j>=0){
			arrNums[j+1] = arrNums[j];
			j--;
		}
		arrNums[j+1]=temp;	
	}

	for(int i=0;i<n;i++){
		printf("%d\n",arrNums[i]);	
	}
}

int main(int argc, char const *argv[]){
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

		//ejecutamos la funcion
		insercion(arrNums,n);


	}else{
		printf("Faltan argumentos\n");
	}
	return 0;
}

