#include <stdio.h>

int main(){
	
int num1, num2, i;

		
printf("Digite o Primeiro Numero: ");
scanf("%d", &num1);
	
printf("Digite o Segundo Numero: ");
scanf("%d", &num2);


if(num1 == num2)
	printf("\nOs Valores sao Iguais");
	
else if(num1 > num2){

		printf("\nO Primeiro valor e maior que o Segundo");
		for(i=num1; i>=num2; i--){
			printf("\n%d", i);
		}
	
}
	
else if(num1 < num2){

		printf("\nO Primeiro valor e menor que o Segundo");
 		for(i=num1; i<=num2; i++){
 			printf("\n%d", i);
		}
}
}
	
	
	
