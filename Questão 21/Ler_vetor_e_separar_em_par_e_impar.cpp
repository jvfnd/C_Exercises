#include <stdio.h>

int main(){
	
int i, numvetor[12], pares[12], impares[12];


for(i=0; i<12; i++){
	printf("Digite o Numero %d: ", i);
	scanf("%d", &numvetor[i]);
}

for(i=0; i<12; i++){
	if(numvetor[i] % 2 == 0){
		pares[i] = numvetor[i];
	}
	else{
		impares[i] = numvetor[i];
	}
}
printf("\nNumeros Pares do vetor: ");
for(i=0; i<12; i++){
	if(pares[i] >= 1){
			printf(" %d ", pares[i]);
	}
}
printf("\n\nNumeros Impares do vetor: ");
for(i=0; i<12; i++){
	if(impares[i] >= 1){
		printf(" %d ", impares[i]);
	}	
}
}