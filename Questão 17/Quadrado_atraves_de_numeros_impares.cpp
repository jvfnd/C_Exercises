#include <stdio.h>

int main(){

int num, i, quad, numquad, parada;


printf("Digite um numero: ");
scanf("%d", &num);

numquad = num * num;
parada = num * 2;
quad=1;

printf("\nO Quadrado do numero %d eh: ", num);

for(i=1; i <parada; i+=2){
     
	 quad =+ i;
  	
		printf("%d + ", quad);	  
}
printf("\b\b= %d", numquad);

}