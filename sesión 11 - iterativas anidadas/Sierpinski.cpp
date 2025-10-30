#include <stdio.h>
#include <math.h>

int factorial(int n);
void imprimir_blancos(int n);

int main(){
	int n;
	printf("Ingrese etapa: ");
	scanf("%d", &n);
	if (n>0){
		int cant_filas = pow(2, n-1);
		printf("Imprimiendo %d filas\n", cant_filas);
		//El problema consiste en recorrer cant_filas
		//lo que es lo mismo recorrer el rango [1..cant_filas]
		for(int i=0; i<cant_filas; i++){
			int cantidad_de_blancos = cant_filas-i-1;
			imprimir_blancos(cantidad_de_blancos);
			for(int j=0; j<=i; j++){					
				int coeficiente = factorial(i)/(factorial(j)*factorial(i-j));
				if (coeficiente %2 == 1)
					printf("A ");
				else
					printf("  ");
			}
			printf("\n");
		}
	}	
	return 0;
}

int factorial(int n){
	int producto = 1;
	for(int i=1; i<=n; i++)
		producto *= i;
	return producto;
}

void imprimir_blancos(int n){
	for(int i=1; i<=n; i++)
		printf(" ");
}
