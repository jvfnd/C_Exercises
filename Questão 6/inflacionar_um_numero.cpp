#include <stdio.h>

int main(){
	
float num, precofinal;

printf("Digite o valor do produto: ");
scanf("%f", &num);

while(num < 100){
	precofinal = num * 1.1;
	printf("\nO valor do produto depois da inflacao eh: %.2f", precofinal);
	break;
} 
while(num >= 100){
	precofinal = num * 1.2;
	printf("\nO valor do produto depois da inflacao eh: %.2f", precofinal);
	break;
}

}