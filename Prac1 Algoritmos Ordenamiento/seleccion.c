#include <stdio.h>
#include <stdlib.h>


void ordenSeleccion(int *arrNums,int lim){
	//esta variable p nos va a ayudar a controlar el numero minimo del arreglo
	int p;

		//ciclo para recorrer por primera vez el arreglo
		for (int k = 0; k <= lim-1; ++k)
		{
			//hacemos nuestro elemento de ciclo el elemento mas pequeño
			p = k;
			//volvemos a recorrer el arreglo para encontrar a otro elemento mas pequeño
			for (int i = k+1; i <= lim-1; ++i)
			{
				//si se encuentra hay que hacer el cambio
				if(arrNums[i]<arrNums[p]){
					p=i;
				}


			}

			//se hace el cambio de las posiciones de los numeros
			if (p!=k){
				int Temp = arrNums[p];
				arrNums[p]=arrNums[k];
				arrNums[k] = Temp;
			}
			printf("%d\n",arrNums[k]);


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

		ordenSeleccion(arrNums,lim);


	}else{
		printf("Faltan argumentos\n");
	}
	




	return 0;
}