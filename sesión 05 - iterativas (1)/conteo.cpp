#include <stdio.h>

int main(){
	int contador = 0;
	int i=0;
	while(i<10){
		if (i % 2==0)
			contador++;
		i++;
	}
	printf("Hay %d n�meros pares", contador);
	return 0;
}
