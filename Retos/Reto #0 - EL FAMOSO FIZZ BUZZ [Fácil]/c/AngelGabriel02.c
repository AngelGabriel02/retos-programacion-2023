#include <stdio.h>
int main(){
	int Contador=0;
	printf("Fizz Buzz\n");
	for(Contador=1;Contador<=100;Contador++){
	if((Contador%3)==0&&(Contador%5)==0){
		printf("Fizz Buzz\n");
		}else{
			if((Contador%3)==0){
				printf("Fizz\n");
			}else{
				if((Contador%5)==0){
				printf("Buzz\n");
			}else{
				printf("%d", Contador);
				printf("\n");
			}
			}
		}	
	}
	return 0;
}
