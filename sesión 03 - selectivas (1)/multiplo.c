#include <stdio.h>

int main(){
	int n, m;
	printf("Ingrese n y m: ");
	scanf("%d %d", &n, &m);
	
	int resto = m % n;
	if (resto==0){
		printf("%d es múltiplo de %d\n", m, n);
	} else{
		printf("%d no es múltiplo de %d\n", m, n);
	}
	
	return 0;
}
