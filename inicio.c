#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num,num1,lim=0;

	num = atoi(argv[1]);

	int *array = (int *)malloc(sizeof(int)*num);

	for(int i = 0;i<num;++i)
	{
		array[i] = i;
	}

	


	printf("Terminó el programa\n");



	return 0;
}

/*
	./inicio < numeros.txt      redireccionar la entrada del teclado


	./inicio > salida.txt        redireccionar la salida del programa remplazando todo lo del archivo

	./inicio >> salida.txt        redireccionar la salida del programa escribiendo al final del archivo





*/