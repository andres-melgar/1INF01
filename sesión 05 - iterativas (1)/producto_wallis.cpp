#include <stdio.h>
#include <math.h>

int main(){
	int cant_terminos;
	printf("Ingrese la cantidad de t�rminos: ");
	scanf("%d", &cant_terminos);
	if (cant_terminos<=0){
		printf("La cantidad de t�rminos debe ser mayor que cero.\n");
	} else {
		double productoria = 1;
		int i=1; //inicializaci�n
		while(i<=cant_terminos){ //uso en la condici�n
			double numerador = pow(4*i, 2);
			double denominador = (4*i-1)*(4*i+1);
			double termino = numerador/denominador;
			productoria *= termino;
			i++; //actualizaci�n
		}
		double valor_pi = productoria*2*sqrt(2);
		printf("El valor calculado de PI a trav�s de la productoria para %d t�rminos es: %lf", cant_terminos, valor_pi);
	}
	
	return 0;
}
