#include <stdio.h>
#include <math.h>
#define KCAL_PEPINO 15
#define KCAL_ZANAHORIA 36
#define KCAL_PIMIENTO 21
#define KCAL_TRUCHA 50
#define KCAL_SALMON 137
/*
C�digo:
Nombre:
*/
int main() {
	/*declaraci�n de variables*/
	char tipoAlimento;
	int catAlimento,validarTipoAlimento,validarCategoria,validarPeso;
	double pesoGramos, pesoPersona, metabolismoBasal, kCalConsumidas,kCalAlimento;
	
	/*Solicitamos datos de entrada al usuario*/
	printf("Ingrese el tipo de alimento a evaluar: ");
	scanf("%c", &tipoAlimento);
	printf("Ingrese la categor�a del alimento: ");
	scanf("%d", &catAlimento);
	printf("Ingrese el peso en gramos: ");
	scanf("%lf", &pesoGramos);
	
	//podemos validar todo en una sola l�nea o por partes
	validarTipoAlimento=(tipoAlimento=='V') ||(tipoAlimento=='P');
	validarCategoria=(tipoAlimento=='V' && (catAlimento>=1 && catAlimento<=3)) || (tipoAlimento=='P' && (catAlimento==1 || catAlimento==2));
	validarPeso=pesoGramos>0;
	
	if (validarTipoAlimento && validarCategoria && validarPeso) {
		//Obtenemos las kilo calor�as del alimento
		if (tipoAlimento=='V') {
			//Pregunto por las categor�as de alimento (1,2,3)
			if (catAlimento==1) {
				kCalAlimento=KCAL_PEPINO;
			} else if (catAlimento==2) {
				kCalAlimento=KCAL_ZANAHORIA;
			} else {
				kCalAlimento=KCAL_PIMIENTO;
			}
			
		} else {
			//Pregunto por las categor�as de alimento (1,2)
			if (catAlimento==1) {
				kCalAlimento=KCAL_TRUCHA;
			} else {
				kCalAlimento=KCAL_SALMON;
			}
		}
		//Hasta ac� ya tengo las kCal del alumento
		kCalConsumidas=pesoGramos*kCalAlimento/100;
		printf("El total de calor�as de la porci�n consumida es: %.2lf ",kCalConsumidas);
		if (kCalConsumidas<100) {
			printf("Y est� en el rango de la porci�n saludable");			
		} else {//>=100
			printf("Y NO est� en el rango de la porci�n saludable");			
		}
		
		//Solicito el peso de la persona
		printf("\nIngrese su peso en Kg: ");
		scanf("%lf",&pesoPersona);
		
		if (pesoPersona>0) {
			metabolismoBasal=70*pow(pesoPersona,(double)3/4);
			printf("Su metabolismo basal es: %lf kcal/dia\n",metabolismoBasal);
		}
	} else {
		printf("Ingres� datos inv�lidos");
	}
	
	return 0;
}
