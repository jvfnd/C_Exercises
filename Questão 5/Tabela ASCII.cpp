#include <stdio.h>

int main(){
	
int i;

printf("\t\tTabela ASCII\n\n");

for(i=0; i<=127; i++){
	printf("Decimal: %d\tHexadecimal: %x\tCaractere: %c\n", i, i, i);
}
	
}