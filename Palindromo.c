#include <stdio.h>
#include <math.h>

int main(){
	int h;//Tamaño del arreglo
	int i;//Variable para ciclo for del arreglo
	int j;// Variable para el ciclo for del arreglo invertido
	int x,y,z;//Variables para guardar valor de comparasión de arreglos
	printf ("Bienvenido a tu visualizador de arreglos favorito \nDe cuantoas valores sera tu arreglo\t");//Interfaz
	scanf("%i", &h);//Obtenemos tamaño de arreglo
	int arreglo[h];//Arreglo principal
	int oglerra[h];//Arreglo invertido
	
		for(i=0, j=h-1; i<h ; i++, j--)// ciclo para obtener el valor del arreglo. Mientras que creamos uno con el orden invertido
		{
			printf("Introduce el valor de la posicion [%d]: ", i);
			scanf("%i", &arreglo[i]);
			oglerra[j]=arreglo[i];
		}
		
printf("Los elementos del arreglo son:\n");//presebtamos el arreglo en pantalla

for(i=0; i<h; i++)
	{
	printf("%i\t", arreglo[i]);
	}
	printf("\n");
for(i=0, j=0; i<h ; i++, j++)//Operaciones matemáticas para ver si el arreglo es un palindromo
		{
		y=x;//con esta operación almacenamos el valor de la resta de abajo del ciclo anterior
		x= arreglo[i]-oglerra[j];//x la resta del primer valor del arreglo principal y el invertido
		z= y+x;//esta operación nos ayuda a mantener registro de la resta y el valor de la resta anterior, si es un palindromo siempre es 0
		}
if (z == 0){//Si la suma de todas las restas es 0, h veces, entonces es un palindromo
		for(j=0; j<h; j++)
			{
			printf("%i\t", oglerra[j]);
			}
		printf("\nFelicidades, tu vector es un palindromo");
	}
else{//de lo contrario no es un palindromo
			for(j=0; j<h; j++)
				{
				printf("%i\t", oglerra[j]);
				}
			printf("\nFuchi, tu vector no es un palindromo");
	}
return 0;
}
