#include <stdio.h>
#include <math.h>
#define PI 3.1415926535

double calcular_pi(int cantidad, double precision);

int main(){
	int cantidad;
	double precision;
	printf("Ingrese cantidad de iteraciones: ");
	scanf("%d", &cantidad);
	printf("Ingrese precisión: ");
	scanf("%lf", &precision);
	if (cantidad>0 && precision< 0.1){
		double pi_calculado = calcular_pi(cantidad, precision);
		if (cantidad>1)
			printf("El valor de PI calculado con el Algoritmo de Brent-Salamin en %d iteraciones es %.20lf\n", cantidad, pi_calculado);
		else
			printf("El valor de PI calculado con el Algoritmo de Brent-Salamin en una iteración es %.20lf\n", pi_calculado);
		printf("La diferencia con el valor de PI dado como dato es %.10lf", fabs(PI-pi_calculado));
	} else
		printf("Los valores ingresados son incorrectos");
	return 0;
}

double calcular_pi(int cantidad, double precision){	
	double p=1, a=1, b=1/sqrt(2), t=(double)1/4;
	int i;
	double pi_calculado;
	for(i=1; i<=cantidad; i++){
		double x = (a+b)/2;
		double y = sqrt(a*b);
		t = t - p*pow(a-x,2);
		a=x;
		b=y;
		p=2*p;
		pi_calculado = pow(a+b,2)/(4*t);
	}
	return pi_calculado;
}

/* otras formas de controlar la iteración
	//forma 1
	int i = 1;
	while (i<=cantidad){
		
		i++;
	}
	// forma 2	
	int i=0;
	do{
		
		i++;
	} while(i<cantidad);
*/
