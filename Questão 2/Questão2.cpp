#include <stdio.h>

int main(){
	
float fahrenheit, celsius, kelvin;

printf("Digite a Temperatura Fahrenheit: ");
scanf("%f", &fahrenheit);

celsius = (fahrenheit - 32) / 1.8;
kelvin = ((fahrenheit - 32) / 1.8) + 273.15;

printf("\n\nA temperatura %.2f graus Fahrenheit em Celsius e de: %.2f graus.", fahrenheit, celsius);

printf("\n\nA temperatura %.2f graus Fahrenheit em Kelvin e de: %.2f graus.", fahrenheit, kelvin);
	
	
	
}