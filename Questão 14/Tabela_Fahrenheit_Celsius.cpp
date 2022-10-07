#include <stdio.h>

int main(){
	
float i, grauscelsius;



for(i=40; i<=75; i++){
	grauscelsius = (i - 32) * 0.55555555555;
	printf("\n\tFahrenheit: %.1f | Celsius: %.1f", i, grauscelsius);
	
}

	
}