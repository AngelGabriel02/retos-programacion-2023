#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (void){
	char cContrasena[17];
	char cletra[27] = "abcdefghijklmnopqrstuvwxyz";
	char cLetra[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cNumero[11] = "0123456789";
	char cSimbolo[26] = ",;.:-_<>|°!#$%&/()=/*-+{}";
	int iParametro = 0;
	int iInterruptor = 0;
	int iInterruptorL = 0;
	int iInterruptorl = 0;
	int iInterruptorN = 0;
	int iInterruptorS = 0;
	int iOpcion = 4;
	srand (time(NULL));
	int iLongitud = 8+rand() % (16-8+1);
	printf("Generador de Contrasenas\n");
	printf("¿Desea que la contraseña tenga letras mayusculas\n");
	printf("1. Si\n");
	printf("2. No\n");
	scanf("%d", & iParametro);
	switch(iParametro){
		case 1 : iInterruptor++; 
		iInterruptorL = iInterruptor;
		break;
		default: break;
	}
	printf("¿Desea que la contraseña tenga letras minusculas\n");
	printf("1. Si\n");
	printf("2. No\n");
	scanf("%d", & iParametro);
	switch(iParametro){
		case 1 : iInterruptor++; 
		iInterruptorl = iInterruptor;
		break;
		default: break;
	}
	printf("¿Desea que la contraseña tenga numeros\n");
	printf("1. Si\n");
	printf("2. No\n");
	scanf("%d", & iParametro);
	switch(iParametro){
		case 1 : iInterruptor++; 
		iInterruptorN = iInterruptor;
		break;
		default: break;
	}
	printf("¿Desea que la contraseña tenga simbolos\n");
	printf("1. Si\n");
	printf("2. No\n");
	scanf("%d", & iParametro);
	switch(iParametro){
		case 1 : iInterruptor++; 
		iInterruptorS = iInterruptor;
		break;
		default: break;
	}
	if(iInterruptor==0){
		printf("No ha ingresado ninguna opción");
	}else{
		for(int iContador=0; iContador <= iLongitud; iContador++){
		int iOpcion = 1+rand() % (iInterruptor+1-1);
		if(iOpcion==iInterruptorL){
			cContrasena[iContador] = cLetra[0+rand() % (27+1-1)];
		}
		if(iOpcion==iInterruptorl){
			cContrasena[iContador] = cletra[0+rand() % (27+1-1)];
		}
		if(iOpcion==iInterruptorN){
			cContrasena[iContador] = cNumero[0+rand() % (11+1-1)];
		}
		if(iOpcion==iInterruptorS){
			cContrasena[iContador] = cSimbolo[0+rand() % (26+1-1)];
		}
	}
	printf("Su contrasena es:\n%s\n", cContrasena);
	}
	
	
	return 0;
}
