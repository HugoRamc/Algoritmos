#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num,num1,lim=0;

	num = atoi(argv[1]);

	int *array;

	array = (int *)malloc(sizeof(int)*num);

	printf("Introduc un n menor a 10,000,000\n");
	//scanf("%d",&num);

	while(lim < num)
	{
		
		scanf("%d",&num1);


		printf("%d\n",num1);

		lim = lim +1;
	}



	return 0;
}

