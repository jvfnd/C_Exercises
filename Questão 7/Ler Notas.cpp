#include <stdio.h>

int main(){
	
float nota1, nota2, media;


printf("Digite a Primeira Nota de 0 a 10: ");
scanf("%f", &nota1);

if((nota1 > 10) || (nota1 < 0)){
	printf("\n\tERRO!!! NAO E POSSIVEL LER ESTE VALOR!");
	return 0;
}

printf("Digite a Segunda Nota de 0 a 10: ");
scanf("%f", &nota2);

if((nota2 > 10) || (nota2 < 0)){
	printf("\n\tERRO!!! NAO E POSSIVEL LER ESTE VALOR!");
	return 0;
}


media = (nota1 + nota2) / 2;

printf("\nSua Media e de %.1f", media);



	
}