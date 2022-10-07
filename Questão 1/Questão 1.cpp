#include <stdio.h>
#include <math.h>

int main(){

float num1, num2;
float somadosnumeros, quadnum1, quadnum2, prodquadnum2, raizdasomadosquad, senodadiferenca, modulonum1;

printf("Digite o Primeiro Numero: ");
scanf("%f", &num1);

printf("Digite o Segundo Numero: ");
scanf("%f", &num2);

somadosnumeros = num1 + num2;
prodquadnum2 = num1 + (num2 * num2);
quadnum1 = num1 * num1;
quadnum2 = num2 * num2;
raizdasomadosquad = sqrt(quadnum1 + quadnum2);
senodadiferenca = sin(num1 - num2);
modulonum1 = abs(num1);


printf("\n\nA soma dos dois numeros sao: %.1f", somadosnumeros);

printf("\n\nO quadrado do Primeiro numero: %.1f", quadnum1);

printf("\n\nO produto do Primeiro numero mais o quadrado do Segundo: %.1f", prodquadnum2);

printf("\n\nRaiz da soma dos quadrados e : %.1f", raizdasomadosquad);

printf("\n\nO seno da Diferenca do Primeiro e Segundo numero e: %.2f", senodadiferenca);

printf("\n\nO modulo do Primeiro numero e: %.1f", modulonum1);
	
	
}