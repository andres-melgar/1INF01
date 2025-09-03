#include <stdio.h>

int main(){
	double operando1, operando2;
	char operacion;
	
	printf("Ingrese operandos: ");
	scanf("%lf %lf", &operando1, &operando2);
	printf("Ingrese operación: ");
	scanf("\n %c", &operacion);
	
	double resultado;
	int bandera_division_por_cero = 0;
	if (operacion=='+')
		resultado = operando1+operando2;
	else if (operacion=='-')
		resultado = operando1-operando2;
	else if (operacion=='*')
		resultado = operando1*operando2;
	else if (operacion=='/'){
		if (operando2==0)
			bandera_division_por_cero = 1;
		else
			resultado = operando1/operando2;
	}
			
	if (bandera_division_por_cero)
		printf("No se puede dividir entre cero\n");	
	else
		printf("%lf %c %lf = %lf\n", operando1, operacion, operando2, resultado);
	return 0;
}
