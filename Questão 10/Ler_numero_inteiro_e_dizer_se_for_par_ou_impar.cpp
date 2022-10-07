#include <stdio.h>

int main(){
	
int num;

printf("Digite um numero inteiro: ");
scanf("%d", &num);

if(num % 2 == 0){
	if(num > 15)
		printf("\nO Numero %d eh par e maior que 15", num);
	else
		printf("\nO Numero %d eh par e menor que 15", num);
	
}
else{
	if(num < 50)
		printf("\nO Numero %d eh impar e menor que 50", num);
	else
		printf("\nO Numero %d eh impar e maior que 50", num);	
}
	
	
}