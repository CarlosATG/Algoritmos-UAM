#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include "EDPila.h"
#include <ctype.h>
#include<string.h>


char actual(char *morse1, char *morse2, char *morse3,char *morse4, char *morse5, char *morse6){
	//A .-
	if(*morse1 == '.' && *morse2 == '-' && *morse3 == '\0'){ 
	*morse1 = 'A';
	}
	//B -...
	else if(*morse1 == '-' && *morse2 == '.' && *morse3 =='.' && *morse4== '.' && *morse5=='\0'){
	*morse1= 'B';
	}
	//C -.-.
	else if(*morse1=='-' && *morse2=='.' && *morse3=='-' && *morse4=='.' && *morse5=='\0'){
	*morse1='C';
	}
	//D -..
	else if(*morse1=='-' && *morse2=='.' && *morse3=='.' && *morse4=='\0'){
	*morse1='D';
	}
	//E .
	else if(*morse1=='.' && *morse2=='\0'){//E
	*morse1='E';
	}
	//F ..-.
	else if(*morse1=='.' && *morse2=='.' && *morse3=='-' && *morse4=='.' && *morse5=='\0'){
	*morse1='F';
	}
	//G --.
	else if(*morse1=='-' && *morse2=='-' && *morse3=='.' && *morse4=='\0'){
	*morse1='G';
	}
	//H ....
	else if(*morse1=='.' && *morse2=='.' && *morse3=='.' && *morse4=='.' && *morse5=='\0'){
	*morse1='H';
	}
	//I ..
	else if(*morse1=='.' && *morse2=='.' && *morse3=='\0'){
	*morse1='I';
	}
	//J .---
	else if(*morse1=='.' && *morse2=='-' && *morse3=='-' && *morse4=='-' && *morse5=='\0'){
	*morse1='J';
	}
	//K -.-
	else if(*morse1=='-' && *morse2=='.' && *morse3=='-' && *morse4=='\0'){
	*morse1='K';
	}
	//L .-..
	else if(*morse1=='.' && *morse2=='-' && *morse3=='.' && *morse4=='.' && *morse5=='\0'){
	*morse1='L';
	}
	//M--
	else if(*morse1=='-' && *morse2=='-' && *morse3=='\0'){
	*morse1='M';
	}
	//N -.
	else if(*morse1=='-' && *morse2=='.' && *morse3=='\0'){
	*morse1='N';
	}
	//O ---
	else if(*morse1=='-' && *morse2=='-' && *morse3=='-' && *morse4=='\0'){
	*morse1='O';
	}
	//P .--.
	else if(*morse1=='.' && *morse2=='-' && *morse3=='-' && *morse4=='.' && *morse5=='\0'){
	*morse1='P';
	}
	//Q --.-
	else if(*morse1=='-' && *morse2=='-' && *morse3=='.' && *morse4=='-' && *morse5=='\0'){
	*morse1='Q';
	}
	//R .-.
	else if(*morse1=='.' && *morse2=='-' && *morse3=='.' && *morse4=='\0'){
	*morse1='R';
	}
	//S ...
	else if(*morse1=='.' && *morse2=='.' && *morse3=='.' && *morse4=='\0'){
	*morse1='S';
	}
	//T -
	else if(*morse1=='-' && *morse2=='\0'){
	*morse1='T';
	}
	//U ..-
	else if(*morse1=='.' && *morse2=='.' && *morse3=='-' && *morse4=='\0'){
	*morse1='U';
	}
	//V ...-
	else if(*morse1=='.' && *morse2=='.' && *morse3=='.' && *morse4=='-' && *morse5=='\0'){
	*morse1='V';
	}
	//W .--
	else if(*morse1=='.' && *morse2=='-' && *morse3=='-' && *morse4=='\0'){
	*morse1='W';
	}
	//X -..-
	else if(*morse1=='-' && *morse2=='.' && *morse3=='.' && *morse4=='-' && *morse5=='\0'){
	*morse1='X';
	}
	//Y -.--
	else if(*morse1=='-' && *morse2=='.' && *morse3=='-' && *morse4=='-' && *morse5=='\0'){
	*morse1='Y';
	}
	//Z --..
	else if(*morse1=='-' && *morse2=='-' && *morse3=='.' && *morse4=='.' && *morse5=='\0'){
	*morse1='Z';
	}
	//0 -----
	else if(*morse1=='-' && *morse2=='-' && *morse3=='-' && *morse4=='-' && *morse5=='-' && *morse6=='\0'){
	*morse1='0';
	}
	//1 .----
	else if(*morse1=='.' && *morse2=='-' && *morse3=='-' && *morse4=='-' && *morse5=='-' && *morse6=='\0'){
	*morse1='1';
	}
	//2 ..---
	else if(*morse1=='.' && *morse2=='.' && *morse3=='-' && *morse4=='-' && *morse5=='-' && *morse6=='\0'){
	*morse1='2';
	}
	//3 ...--
	else if(*morse1=='.' && *morse2=='.' && *morse3=='.' && *morse4=='-' && *morse5=='-' && *morse6=='\0'){
	*morse1='3';
	}
	//4 ....-
	else if(*morse1=='.' && *morse2=='.' && *morse3=='.' && *morse4=='.' && *morse5=='-' && *morse6=='\0'){
	*morse1='4';
	}
	//5 .....
	else if(*morse1=='.' && *morse2=='.' && *morse3=='.' && *morse4=='.' && *morse5=='.' && *morse6=='\0'){
	*morse1='5';
	}
	//6 -....
	else if(*morse1=='-' && *morse2=='.' && *morse3=='.' && *morse4=='.' && *morse5=='.' && *morse6=='\0'){
	*morse1='6';
	}
	//7 --...
	else if(*morse1=='-' && *morse2=='-' && *morse3=='.' && *morse4=='.' && *morse5=='.' && *morse6=='\0'){
	*morse1='7';
	}
	//8 ---..
	else if(*morse1=='-' && *morse2=='-' && *morse3=='-' && *morse4=='.' && *morse5=='.' && *morse6=='\0'){
	*morse1='8';
	}
	//9 ----.
	else if(*morse1=='-' && *morse2=='-' && *morse3=='-' && *morse4=='-' && *morse5=='.' && *morse6=='\0'){
	*morse1='9';
	}
}

void main(){
	char morse[6];
	char copia[1];
	int i, longitud; 
	TPila Texto;
	TPila Legible;

	CrearPila(&Texto, sizeof(morse));
	CrearPila(&Legible, sizeof(morse));
	printf("De cuantos caracteres morse es tu codigo secreto?\t");
	scanf("%i", &longitud);
	printf("\nEscribe tu caracter, letra o palabra, y presiona enter para ingresar el siguiente\n");
	for(i=-1; i<longitud; i++){
	gets(morse);
	actual(&morse[0], &morse[1], &morse[2], &morse[3], &morse[4], &morse[5]);
	/*printf("%c\n", morse[0]);*/
	Apilar (&Texto, &morse[0]);
	}
	printf("Asi se ve tu pila\n");
	while(PilaVacia(Texto)!=1){
	Desapilar(&Texto, &copia[0]);
	Apilar(&Legible, &copia[0]);
	printf("%c\t", copia[0]);
	}
	printf("\n\n\nAhora ordenada y legible: ");
	while(PilaVacia(Legible)!=1){
	Desapilar(&Legible, &copia[0]);
	printf("%c", copia[0]);
	}
}




	 