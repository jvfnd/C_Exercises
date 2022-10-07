#include <stdio.h>

int main(){
	
int numvetor[5], i, nummaior;
	
for(i=0; i<5; i++){
	printf("Digite o Numero %d do vetor: ", i);
	scanf("%d", &numvetor[i]);
	
}

nummaior = 0;

for(i=0; i<5; i++){
	if(numvetor[i] >= nummaior){
		nummaior = numvetor[i];
	}
}
printf("\n");
for(i=0; i<5; i++){
	printf(" %d | ", numvetor[i]);
}
printf("\b\b ===> O maior numero deste vetor eh %d", nummaior);
}
