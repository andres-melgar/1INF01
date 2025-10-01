#include <stdio.h>

int main(){
	double n;
	int cant;
	printf("Ingrese un número positivo: ");
	scanf("%lf", &n);
	printf("Ingrese la cantidad de iteraciones: ");
	scanf("%d", &cant);
	if (n>0){
		if (cant>1){
			int i=1;
			printf("i N a N/a Promedio\n");
			double a = 1;
			double promedio;
			while (i<=cant){
				double n_entre_a = n/a;
				promedio = (a + n_entre_a)/2;
				printf("%d %lf %lf %lf %lf\n", i, n, a, n_entre_a, promedio);
				i++;
				a = promedio;
			}
			printf("La raíz cuadrada de %lf obtenida es %lf", n, promedio);
		} else
			printf("La cantidad de iteraciones debe ser mayor que 1");
	} else
		printf("El número debe ser mayor que cero");
	return 0;
}
