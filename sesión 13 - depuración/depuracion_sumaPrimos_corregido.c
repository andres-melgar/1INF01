#include <stdio.h>

void leerDatos(int *,int *);
int validarDatos(int, int);
void sumarPrimos(int ,int );
int calcularSiguientePrimo(int );

int main(){
	int rangoIni,rangoFin,validacion,suma;
	leerDatos(&rangoIni,&rangoFin);
	if (validarDatos(rangoIni,rangoFin))
		sumarPrimos(rangoIni,rangoFin);
	else
		printf("Los números deben ser mayores a 0 y el 2do número mayor al primero\n");
	return 0;
}

void leerDatos(int *rangoIni,int *rangoFin){
	printf("Ingrese un rango de números: ");
	scanf("%d %d",rangoIni,rangoFin);	
}

int validarDatos(int rangoIni,int rangoFin){
 	int validacion;
 	validacion=rangoIni>0 && rangoIni<rangoFin;
	return validacion;
}

void sumarPrimos(int rangoIni,int rangoFin){
	int suma=0,sigPrimo=rangoIni,inicio=1; 
	do{
		sigPrimo=calcularSiguientePrimo(sigPrimo);
		if (sigPrimo<rangoFin){
			suma+=sigPrimo;	
			if (!inicio) 
				printf("+ ");	
			if (inicio) {
				printf("La suma de los números primos dentro del rango ]%d;%d[ es ",rangoIni,rangoFin);
				inicio = 0;
			}		
			printf("%d ",sigPrimo);	
		}		
	}while (sigPrimo<rangoFin);
	if (!inicio)
		printf(" = %d\n",suma);
	else
		printf("No se encontraron números primos en el rango ingresado\n");
}

int calcularSiguientePrimo(int numero){
	int numEvaluar=numero;
    int divisor=1,contDivisores=0;
    int encontrado=0, sigPrimo;
    while (!encontrado){
        numEvaluar++;
        divisor=1;
        contDivisores=0;
        while (divisor<=numEvaluar && contDivisores<=2){
            if (numEvaluar%divisor==0)
				contDivisores++;
            divisor++;
        }
        if (contDivisores==2){ 
            sigPrimo=numEvaluar;
            encontrado = 1;
        }    
    }
    return sigPrimo;
}
