#include <stdio.h>
#include <math.h>

int main(){
	printf("Ingrese el lado: ");
	double lado;
	scanf("%lf", &lado);
	//hago la VALIDACI�N de los datos
	if (lado>0){
		double area = pow(lado, 2);
		printf("El �rea del cuadrado de lado %lf es %lf\n", lado, area);	
	} else{
		printf("El lado debe ser mayor que cero\n");
	}
	return 0;
}
