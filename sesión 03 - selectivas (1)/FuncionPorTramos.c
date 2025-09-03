#include <stdio.h>
#include <math.h>

int main(){
	double x;
	printf("Ingrese el valor de x: ");
	scanf("%lf", &x);
	
	double resultado;
	if (x<5)
		resultado = pow(x,2);
	else
		if (x<10)
			resultado = pow(x,3)-1;
		 else	
			resultado = x/2;		
	printf("El resultado es %lf\n", resultado);
	return 0;
} 
