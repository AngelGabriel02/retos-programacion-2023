#include <stdio.h>
#include <string.h>
int main() {
	char cPalabra[50];
	char cAbecedario[37]="abcdefghijklmnopqrstuvwxyz0123456789";
	int iPosicion=0;
	scanf("%s", &cPalabra);
	int iContador = 0;
	do{
		while(cPalabra[iContador]==cAbecedario[iPosicion]){
						if(iPosicion==0){
					printf("4 ");//a
					}else{
						if(iPosicion==1){
					printf("I3 ");//b
					}else{
						if(iPosicion==2){
					printf("[ ");//c
					}else{
						if(iPosicion==3){
					printf(") ");//d
					}else{
						if(iPosicion==4){
					printf("3 ");//e
					}else{
						if(iPosicion==5){
					printf("|= ");//f
					}else{
						if(iPosicion==6){
					printf("& ");//g
					}else{
						if(iPosicion==7){
					printf("# ");//h
					}else{
						if(iPosicion==8){
					printf("1 ");//i
					}else{
						if(iPosicion==9){
					printf(",_| ");//j
					}else{
						if(iPosicion==10){
					printf(">| ");//k
					}else{
						if(iPosicion==11){
					printf("1 ");//l
					}else{
						if(iPosicion==12){
					printf("/\\/\\ ");//m
					}else{
						if(iPosicion==13){
					printf("^/ ");//n
					}else{
						if(iPosicion==14){
					printf("o ");//o
					}else{
						if(iPosicion==15){
					printf("|* ");//p
					}else{
						if(iPosicion==16){
					printf("(_,) ");//q
					}else{
						if(iPosicion==17){
					printf("I2 ");//r
					}else{
						if(iPosicion==18){
					printf("5 ");//s
					}else{
						if(iPosicion==19){
					printf("7 ");//t
					}else{
						if(iPosicion==20){
					printf("(_) ");//u
					}else{
						if(iPosicion==21){
					printf("\\/ ");//v
					}else{
						if(iPosicion==22){
					printf("\\/\\/ ");//w
					}else{
						if(iPosicion==23){
					printf(">< ");//x
					}else{
						if(iPosicion==24){
					printf("j ");//y
					}else{
						if(iPosicion==25){
					printf("2 ");//z
					}else{
						if(iPosicion==26){
					printf("o ");//0
					}else{
						if(iPosicion==27){
					printf("L ");//1
					}else{
						if(iPosicion==28){
					printf("R ");//2
					}else{
						if(iPosicion==29){
					printf("E ");//3
					}else{
						if(iPosicion==30){
					printf("A ");//4
					}else{
						if(iPosicion==31){
					printf("S ");//5
					}else{
						if(iPosicion==32){
					printf("b ");//6
					}else{
						if(iPosicion==33){
					printf("T ");//7
					}else{
						if(iPosicion==34){
					printf("B ");//8
					}else{
						if(iPosicion==35){
					printf("g ");//8
					}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
					iPosicion=0;
					iContador++;
					}
		iPosicion++;
		
	}while(iContador<=strlen(cPalabra));
	return 0;
}
