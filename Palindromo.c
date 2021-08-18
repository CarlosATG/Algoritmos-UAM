#include <stdio.h>
#include <math.h>

int main(){

	int arreglo[7];
	int oglerra[7];
	int i;
	int j;
	int x,y;
	
		for(i=0, j=6; i<7 ; i++, j--)
		{
			printf("Introduce el valor de la posicion [%d]: ", i);
			scanf("%i", &arreglo[i]);
			oglerra[j]=arreglo[i];
		}
		
printf("Los elementos del arreglo son:\n ");

for(i=0; i<7; i++)
	{
	printf("%i \t", arreglo[i]);
	}
	printf("\n");
	for(i=0, j=0; i<7 ; i++, j++)
		{
		y=x+1;
		x= arreglo[i]-oglerra[j];
		}
	if (y == 1){
		printf("\n Felicidades, tu vector es un palindromo");
	}
return 0;
}