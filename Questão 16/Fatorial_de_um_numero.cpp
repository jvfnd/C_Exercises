#include <stdio.h>

int main(){
	
int num, fatorial, i;


printf("Digite um numero: ");
scanf("%d", &num);

fatorial = 1;

for(i=num; i>=1; i--){	
	fatorial = fatorial * i;
}
printf("\n\nO Fatorial de %d eh: %d", num, fatorial);
	
}