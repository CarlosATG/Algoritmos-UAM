#include <stdio.h>
#include <math.h>

int main(){
	int h;
	int i;
	int j;
	int z;
	int x,y;
	printf ("Bienvenido a tu visualizador de arreglos favorito \nDe cuantoas valores sera tu arreglo\t");
	scanf("%i", &h);
	int arreglo[h];
	int oglerra[h];
	
		for(i=0, j=h-1; i<h ; i++, j--)// ciclo para obtener el valor del arreglo. Mientras que creamos uno con el orden invertido
		{
			printf("Introduce el valor de la posicion [%d]: ", i);
			scanf("%i", &arreglo[i]);
			oglerra[j]=arreglo[i];
		}
		
printf("Los elementos del arreglo son:\n");

for(i=0; i<h; i++)
	{
	printf("%i\t", arreglo[i]);
	}
	printf("\n");
for(i=0, j=0; i<h ; i++, j++)
		{
		y=x;
		x= arreglo[i]-oglerra[j];//x es la resta del ultimo valor del arreglo con el primero
		z= y+x;
		}
if (z == 0){//si después de sumar 
		for(j=0; j<h; j++)
			{
			printf("%i\t", oglerra[j]);
			}
		printf("\nFelicidades, tu vector es un palindromo");
	}
else{
			for(j=0; j<h; j++)
				{
				printf("%i\t", oglerra[j]);
				}
			printf("\nFuchi, tu vector no es un palindromo");
	}
return 0;
}
