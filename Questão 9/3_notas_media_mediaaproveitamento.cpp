#include <stdio.h>

int main(){
	
float nota1, nota2, nota3, media, mediaaproveitamento;

printf("Digite sua Primeira nota: ");
scanf("%f", &nota1);

printf("Digite sua Segunda nota: ");
scanf("%f", &nota2);

printf("Digite sua Terceira nota: ");
scanf("%f", &nota3);

printf("Digite a media das notas das atividades realizadas: ");
scanf("%f", &media);

mediaaproveitamento = (nota1 + nota2 * 2 + nota3 * 3 + media) / 7;

printf("\nA nota da sua media de aproveitamento foi: %.1f\nE por isso recebeu:", mediaaproveitamento);

if(mediaaproveitamento >= 9)
	printf("\n\nConceito A");
	
else if((mediaaproveitamento >= 7.5) && (mediaaproveitamento < 9))
	printf("\n\nConceito B");
	
else if((mediaaproveitamento >= 6) && (mediaaproveitamento < 7.5))
	printf("\n\nConceito C");
	
else if((mediaaproveitamento >= 4) && (mediaaproveitamento < 6))
	printf("\n\nConceito D");
	
else if(mediaaproveitamento < 4)
	printf("\n\nRecebeu Conceito E");






}