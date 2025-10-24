#include <stdio.h>

int main(){
	int cantidad=0;
	while (true){
		printf("Ingrese el número impar: ");
		int numero;
		scanf("%d", &numero);
		if (numero %2==1)
			cantidad++;
		else
			break;
	}
	printf("La cantidad de números impares leídos es %d", cantidad);
	return 0;
}

