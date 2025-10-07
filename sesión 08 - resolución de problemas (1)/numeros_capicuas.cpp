#include <stdio.h>
#include <math.h>

int obtener_cantidad_cifras(int numero);
void evaluarCapicuas(int cant_cifras_numero, int numero, int *esCapicua, int *esICapicua, int *esDCapicua);
int evaluaCapicua(int cant_cifras_numero, int numero);

int main(){
	int cant_cifras_parametro;
	printf("Ingrese la cantidad de cifras de un número: ");
	scanf("%d", &cant_cifras_parametro);
	if (cant_cifras_parametro>=4 && cant_cifras_parametro<=5){
		int numero;
		printf("Ingrese el número a evaluar: ");
		scanf("%d", &numero);
		int cant_cifras_numero = obtener_cantidad_cifras(numero);
		if (cant_cifras_parametro==cant_cifras_numero){
			int esCapicua, esICapicua, esDCapicua;
			evaluarCapicuas(cant_cifras_numero, numero, &esCapicua, &esICapicua, &esDCapicua);
			if (esCapicua || esICapicua || esDCapicua){
				printf("El número es Distinguido porque es:\n");
				if (esCapicua)
					printf("Capicúa\n");	
				if (esICapicua)
					printf("I-Capicúa\n");
				if (esDCapicua)
					printf("D-Capicúa\n");		
			} else
				printf("El número NO es Distinguido.");	
		} else
			printf("El número ingresado no concuerda con la cantidad de cifras ingresada.");
	} else
		printf("La cantidad de cifras ingresada no es correcta.");
	return 0;
}

void evaluarCapicuas(int cant_cifras_numero, int numero, int *esCapicua, int *esICapicua, int *esDCapicua){
	*esCapicua = evaluaCapicua(cant_cifras_numero, numero);	
	//123==>numero 123, cant_cifras=3, 10^(3-1)=100
	//123/100 ==> 1
	//123%100 ==> 23
	int iNumero = numero % (int)pow(10, cant_cifras_numero-1);
	*esICapicua = evaluaCapicua(cant_cifras_numero-1, iNumero);
	//123 ==> numero 123
	//123/10 ==> 12
	//123%10 ==> 3
	int dNumero = numero/10;
	*esDCapicua = evaluaCapicua(cant_cifras_numero-1, dNumero);	
}

int evaluaCapicua(int cant_cifras, int numero){
	int clone_numero = numero;
	//123 == 321 NO
	//121 == 121 SI
	//¿numero==inverso_numero?
	int inverso = 0;
	int cifras=1;
	//123
	//digito = 3 ==> 123%10 ==> 123/10 == 12
	//inverso = 3
	//digito = 2 ==> 12%10
	//inverso = 3*10
	//inverso = 30+2 == 32
	//1 %10 ==1
	//inverso = 320+1 == 321
	while(cifras<=cant_cifras){
		int digito = numero %10;
		numero /= 10;
		inverso *= 10;
		inverso += digito;
		cifras++;
	}
	return clone_numero==inverso;
}
int obtener_cantidad_cifras(int numero){
	//123 ==> 3 cifras
	//123/10 ==> 12
	//12/10 ==> 1
	//1/10 ==> 0
	int cantidad_cifras = 0;
	while(numero>0){
		cantidad_cifras++;
		numero /= 10;
	}
	return cantidad_cifras;
}
