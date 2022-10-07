#include<stdio.h>

int main(){

int i, num;


printf("\nDigite um Numero para ver os numeros impares menores que ele: ");
scanf("%d", &num);

printf("\n");

for(i=num; i>=1; i--){
	if(i % 2 > 0){
		printf("\n\t%d", i);
	}
	
}


}