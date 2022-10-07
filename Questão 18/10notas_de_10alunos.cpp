#include<stdio.h>

int main(){
	
int notasdosalunos[10][10], aluno, nota;
float soma, media, maior, menor;

for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
		
		printf("Digite a nota %d do Aluno %d: ", nota, aluno);
		scanf("%f", &notasdosalunos[aluno][nota]);
		
		if((notasdosalunos[nota] < 0) || (notasdosalunos[nota] > 10 )){
			
			printf("\n\n\tERRO! DIGITE UM VALOR DE 0 A 10");
			printf("Digite a nota %d do Aluno %d: ", nota, aluno);
			scanf("%f", &notasdosalunos[aluno][nota]);
		}
	}
}
for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
		
		soma = soma + notasdosalunos[aluno][nota];
		
		printf("A soma das Notas do Aluno %d eh: %d", aluno, soma);
		
	}
}
}