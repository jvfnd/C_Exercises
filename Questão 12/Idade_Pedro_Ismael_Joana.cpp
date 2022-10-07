#include <stdio.h>

int main(){
	
int idadepedro, idadejoana, idadeismael;	
		
printf("Digite a idade de Pedro: ");
scanf("%d", &idadepedro);

printf("Digite a idade de Joana: ");
scanf("%d", &idadejoana);

printf("Digite a idade de Ismael: ");
scanf("%d", &idadeismael);

if((idadepedro > idadejoana) && (idadepedro > idadeismael)){
	printf("\nPedro eh mais velho que Joana e Ismael.");
}
else if((idadejoana > idadepedro) && (idadejoana > idadeismael)){
	printf("\nJoana eh mais velha que Pedro e Ismael.");
}	
else if((idadeismael > idadepedro) && (idadeismael > idadejoana)){
	printf("\nIsmael eh mais velho que Pedro e Joana.");
}
}