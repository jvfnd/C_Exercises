#include <stdio.h>

int main(){
	
int numvetor[10], soma, subtracao = 0, i;


for(i=0; i<10; i++){
	printf("Digite o Numero %d: ", i);
	scanf("%d", &numvetor[i]);
}
for(i=0; i<10; i++){
	if(i % 2 == 0){
		soma = numvetor[i] + soma;
	}
	else{
		subtracao = subtracao - numvetor[i];
	}
}

printf("\n\nA soma dos numeros na posicao par deste vetor eh: %d", soma);
printf("\nA Subtracao dos outros numeros deste vetor eh: %d", subtracao);
	
}