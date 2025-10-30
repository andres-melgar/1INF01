#include <stdio.h>

void leer_datos(int *a, int *b);
int es_primo(int n);

int main(){
	int a;
	int b;
	leer_datos(&a, &b);
	if(a>0 && a<b){
		int se_cumple_conjetura_en_el_rango = 1;
		for(int i=a; i<=b; i++){
			if (i>2 && i%2==0){
				int se_cumple_conjetura_del_numero = 0;
				for(int j=2; j<i; j++){
					if (es_primo(j) && es_primo(i-j)){
						printf("%d = %d + %d\n", i, j, i-j);
						se_cumple_conjetura_del_numero = 1;
					}					
				}
				if (!se_cumple_conjetura_del_numero)
					se_cumple_conjetura_en_el_rango = 0;
				
			}			
		}
		if (se_cumple_conjetura_en_el_rango)
			printf("Se cumple la conjetura de Goldbach\n");	
		else
			printf("No se cumple la conjetura de Goldbach\n");
	}
	return 0;
}

void leer_datos(int *a, int *b){
	printf("Ingrese rango inicial a: ");	
	scanf("%d", a);
	printf("Ingrese rango final b: ");	
	scanf("%d", b);
}

int es_primo(int n){
	//¿en qué rango se podrán encontrar los divisores de n?
	//Rpta: [2..n-1], [2..n[, ]1..n[
	int cant_divisores = 0;
	for(int i=2; i<n; i++)
		if (n%i==0)
			cant_divisores++;
	return cant_divisores==0 && n>=2;	
}

/* Esta es otra forma de recorrer el rango exterior
	//forma2
	if (a%2!=0)
		a++;
	if (a<4)
		a=4;
	for(int i=a; i<=b; i+=2){
		printf("%d\n", i);
	}*/
