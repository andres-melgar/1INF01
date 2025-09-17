#include <stdio.h>

int main(){
	int productoria = 1;
	int i=1;
	while(i<=5){
		productoria *= i; //equivale a productoria = productoria*i
		i++;
	}
	printf("La productoria es %d\n", productoria);
	return 0;
}
