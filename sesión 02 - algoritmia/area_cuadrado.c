#include <stdio.h>
#include <math.h>

int main(){
	printf("Ingrese el lado: ");
	double lado;
	scanf("%lf", &lado);
	double area = pow(lado, 2);
	printf("El área del cuadrado de lado %lf es %lf\n", lado, area);
	return 0;
}
