#include <stdio.h>

int main(){
	int numero;
	printf("Ingreso n�mero: ");
	scanf("%d", &numero);
	
	if (numero<=1){
		printf("No se puede determinar si es primo\n");
	} else{
		int contador=0;
		int i=1;
		while (i<=numero){
			if (numero%i==0)
				contador++;
			i++;
		}
		if (contador==2)
			printf("El n�mero %d es primo\n", numero);
		else
			printf("El n�mero %d es NO primo\n", numero);
	}
}
