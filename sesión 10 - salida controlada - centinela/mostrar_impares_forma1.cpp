#include <stdio.h>

int main(){
	int cantidad=0;
	int centinela=0;
	while (!centinela){
		printf("Ingrese el n�mero impar: ");
		int numero;
		scanf("%d", &numero);
		if (numero %2==1)
			cantidad++;
		else
			centinela=1;
	}
	printf("La cantidad de n�meros impares le�dos es %d", cantidad);
	return 0;
}

