#include <stdio.h>
#include <math.h>

int main(){
	//1. lectura
	printf("Ingrese los lados: ");
	double l1, l2, l3;
	scanf("%lf %lf %lf", &l1, &l2, &l3);	
	
	//2. procesamiento
	double s = (l1+l2+l3)/2;
	double area = sqrt(s*(s-l1)*(s-l2)*(s-l3)); 
	
	//3. salida
	printf("El área es %lf\n", area);
	return 0;
}
