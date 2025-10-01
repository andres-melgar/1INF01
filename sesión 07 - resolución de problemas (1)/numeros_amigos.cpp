#include <stdio.h>

void leer_numeros(int *a, int *b);
int son_amigos(int a, int b);
int suma_divisores(int n);
	
int main(){
	int a, b;
	leer_numeros(&a, &b);
	if (a>0 && b>0){
		if (son_amigos(a,b))
			printf("Los números ingresados son amigos");
		else
			printf("Los números ingresados no son amigos");
	} else
		printf("Los números ingresados deben ser positivos");
	return 0;
}

void leer_numeros(int *a, int *b){
	printf("Ingrese los dos números a evaluar: ");
	scanf("%d %d", a, b);
}

int son_amigos(int a, int b){
	int suma_div_a = suma_divisores(a);
	int suma_div_b = suma_divisores(b);
	return suma_div_a==b && suma_div_b==a;
}

int suma_divisores(int n){
	int sumatoria = 0;
	int i = 1;
	while (i < n){
		if (n % i == 0)	
			sumatoria += i;
		i++;
	}
	return sumatoria;
}
