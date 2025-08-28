#include <stdio.h>

int main(){
	//1. lectura
	printf("Ingrese los grados celcius: ");
	double gradosCelcius;
	scanf("%lf", &gradosCelcius);	
	
	//2. procesamiento
	double gradosFahrenheit = gradosCelcius*((double)9/5)+32;
	
	//3. salida
	printf("Los grados Fahrenheit son: %lf\n", gradosFahrenheit);
	return 0;
}
