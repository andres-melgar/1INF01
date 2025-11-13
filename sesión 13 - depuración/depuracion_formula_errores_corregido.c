#include <stdio.h>
#include <math.h>

int calcularSumatoriaPotencias(int );
int sumarPotencias(int );

int main(){
	int numero=1,sumaPotencias,sumaFormula;
	while(numero>0){
		printf("Ingrese un número mayor a 0:");
		scanf("%d",&numero);
		if (numero>0){
			sumaPotencias=calcularSumatoriaPotencias(numero);
			sumaFormula=sumarPotencias(numero);			
			printf("Resultado de la suma de potencias: %d\n",sumaPotencias);
			printf("Resultado al usar la fórmula: %d\n",sumaFormula);
			if (sumaPotencias==sumaFormula)
				printf("Se comprueba que sumar las potencias individualmente es igual que utilizar la fórmula\n\n");
			else	
				printf("Error al comprobar la fórmula\n\n");
		}			
	}
	return 0;	
}

/*tabla de datos
#iteracion numero i suma
0 4 0 0
1 4 0 1
2 4 1 17
3 4 2 98
4 4 3 354
*/
int calcularSumatoriaPotencias(int numero){
	int i,suma=0;
	//printf("#iteracion numero i suma\n");
	//printf("%d %d %d %d\n", 0, numero, i, suma);
	for (i=0;i<numero;i++){	
		suma=suma+pow(i+1,4);
		//printf("%d %d %d %d\n", i+1, numero, i, suma);	
	}
	return suma;
}

int sumarPotencias(int numero){
	int polinomio = 6*pow(numero,3) + 9*pow(numero,2) + numero - 1;	
	int numerador = numero*(numero+1)*(polinomio);
	int denominador = 30;	
	//suma=numero*(numero+1)*6*pow(numero,3)+9*pow(numero,2)+numero-1/30;
	int suma = numerador/denominador;
	return suma;
}
