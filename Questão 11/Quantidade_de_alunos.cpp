#include <stdio.h>

int main(){
	
int alunos, alunas, totalalunos;

printf("Digite o Numero de meninos da sala: ");
scanf("%d", &alunos);

printf("Digite o Numero de meninas da sala: ");
scanf("%d", &alunas);

totalalunos = alunos + alunas;

if(alunos > alunas){
	printf("\nA quantidade de meninos da sala eh maior que a quantidade de meninas.");
	printf("\nTendo %d Meninos e %d Meninas.", alunos, alunas);
	printf("\nTotal de Alunos na sala: %d", totalalunos);
}
else if(alunos == alunas){
	printf("\nA quantidade de meninos da sala eh igual a quantidade de meninas.");
	printf("\nTendo %d Meninos e %d Meninas.", alunos, alunas);
	printf("\nTotal de Alunos na sala: %d", totalalunos);
}
else if(alunos < alunas){
	printf("\nA quantidade de meninas da sala eh maior que a quantidade de meninos.");
	printf("\nTendo %d Meninos e %d Meninas.", alunos, alunas);
	printf("\nTotal de Alunos na sala: %d", totalalunos);
}

}