#include <stdio.h>
#include <math.h>

int main(){
	int cant_terminos;
	printf("Ingrese la cantidad de términos: ");
	scanf("%d", &cant_terminos);
	if (cant_terminos<=0){
		printf("La cantidad de términos debe ser mayor que cero.\n");
	} else {
		double productoria = 1;
		int i=1; //inicialización
		while(i<=cant_terminos){ //uso en la condición
			double numerador = pow(4*i, 2);
			double denominador = (4*i-1)*(4*i+1);
			double termino = numerador/denominador;
			productoria *= termino;
			i++; //actualización
		}
		double valor_pi = productoria*2*sqrt(2);
		printf("El valor calculado de PI a través de la productoria para %d términos es: %lf", cant_terminos, valor_pi);
	}
	
	return 0;
}
