#include <stdio.h>
int main(void){
		int Punto=0, Punto1=0, Punto2=0,Ganador=0;
		printf("Resultados del partido\n");
		printf("Por favor ingrese el numero del participante que anota un punto\n");
		printf("1 para Player1\n2 para Player2\n");
		while(Ganador==0){
			scanf("%d", & Punto);
			if(Punto==1){
				Punto1++;
			}else{
				if(Punto==2){
					Punto2++;
				}else{
					printf("Valor invalido");
					Ganador++;
				}
			}
			if(Punto==1||Punto==2){
				if(Punto1>=5&&(Punto1-2)>=Punto2||Punto2>=5&&(Punto2-2)>=Punto1){
					printf("El ganador es Player%d", Punto);
					Ganador++;
				}else{
					if(Punto1>=4&&(Punto1-1)>=Punto2||Punto2>=4&&(Punto2-1)>=Punto1){
						printf("Ventaja\n");
					}else{
						if(Punto1==Punto2&&Punto1>=3){
							printf("Deuce\n");
						}else{
							if(Punto1==0){
								printf("Love	-	");
							}else{
								if(Punto1==1){
									printf("15	-	");
								}else{
									if(Punto1==2){
										printf("30	-	");
									}else{
										if(Punto1==3){
											printf("40	-	");
										}
									}
								}
							}
							if(Punto2==0){
								printf("Love\n");
							}else{
								if(Punto2==1){
									printf("15\n");
								}else{
									if(Punto2==2){
										printf("30\n");
									}else{
										if(Punto2==3){
											printf("40\n");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	return 0;
}
