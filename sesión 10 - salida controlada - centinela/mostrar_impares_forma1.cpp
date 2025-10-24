#include <stdio.h>

int main(){
	int cantidad=0;
	int centinela=0;
	while (!centinela){
		printf("Ingrese el número impar: ");
		int numero;
		scanf("%d", &numero);
		if (numero %2==1)
			cantidad++;
		else
			centinela=1;
	}
	printf("La cantidad de números impares leídos es %d", cantidad);
	return 0;
}

