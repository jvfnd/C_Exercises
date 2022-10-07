#include<stdio.h>

int main(){
	
int aluno, nota;
float notasdosalunos[10][10], soma, media, maior, menor;

for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
		
			printf("Digite a nota %d do Aluno %d: ", nota, aluno);
			scanf("%f", &notasdosalunos[aluno][nota]);
			
		}
	}

for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
		
		soma = soma + notasdosalunos[aluno][nota];	
	} 
		
printf("\nA soma das Notas do Aluno %d eh: %.2f", aluno, soma);
soma = 0;

}

printf("\n");
maior = 0;

for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
		if(notasdosalunos[aluno][nota] > maior){
			maior = notasdosalunos[aluno][nota];
		}	
	}
	printf("\nA Maior nota do Aluno %d eh: %.2f", aluno, maior);
	maior = 0;
}
printf("\n");

for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
			soma = soma + notasdosalunos[aluno][nota];
			media = soma / 10;
	}
	
printf("\nA Media das Notas do Aluno %d eh: %.2f", aluno, media);
media=0;
soma=0;
	
}

menor=10;

printf("\n");

for(aluno=0; aluno<10; aluno++){
	for(nota=0; nota<10; nota++){
	if(notasdosalunos[aluno][nota] < menor){
		menor = notasdosalunos[aluno][nota];	
	}
	}
	printf("\nA Menor nota do Aluno %d eh: %.2f", aluno, menor);
	menor=10;
}
}