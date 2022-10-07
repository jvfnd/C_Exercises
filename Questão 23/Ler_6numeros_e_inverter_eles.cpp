#include <stdio.h>

int main(){
	
int numvetor[6], i;

for(i=0; i<6; i++){
	printf("Digite o numero %d: ", i);
	scanf("%d", &numvetor[i]);
}
printf("\n\n");

for(i=5; i>=0; i--){
	printf(" %d ", numvetor[i]);
}
}