#include <stdio.h>

void leer_anhos(int *anho_inicio, int *anho_fin);
void imprimir_fecha(int dia, int mes, int anho);
void incrementar_dia(int *dia, int *mes, int *anho);
int maximo_por_mes(int mes, int anho);
int es_bisiesto(int anho);
int es_fecha_magica(int dia, int mes, int anho);

int main(){
	//[a,b] a <= b
	//a==>anho_inicio
	//b==>anho_fin
	//variable==>anho
	//actualización==> día por día
	int anho_inicio, anho_fin;
	leer_anhos(&anho_inicio, &anho_fin);
	
	int dia=1, mes=1, anho=anho_inicio;
	while(anho<=anho_fin){
		if (es_fecha_magica(dia, mes, anho))
			imprimir_fecha(dia, mes, anho);
		incrementar_dia(&dia, &mes, &anho);
	}
	return 0;
}

int es_fecha_magica(int dia, int mes, int anho){
	//por ejemplo 10/06/1960
	//dia==>10
	//mes==>6
	//anho==>1960
	//dia*mes ==> 60
	//anho/100 ==> 19
	//anho%100 ==> 60
	return dia*mes==anho%100;
}

int es_bisiesto(int anho){
	return (anho % 4==0) && ((anho % 400==0) || (anho % 100!=0));
}

int maximo_por_mes(int mes, int anho){
	int cant_max_dia_por_mes;
	if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes ==12)
		cant_max_dia_por_mes = 31;
	else if (mes==4 || mes==6 || mes==9 || mes==11)
		cant_max_dia_por_mes = 30;
	else{
		cant_max_dia_por_mes = 28;
		if (es_bisiesto(anho))
			cant_max_dia_por_mes++;
	}
	return cant_max_dia_por_mes;
}

void incrementar_dia(int *dia, int *mes, int *anho){
	int cant_max_dia_por_mes = maximo_por_mes(*mes, *anho);
	(*dia)++;
	if ((*dia)>cant_max_dia_por_mes){
		*dia=1;
		(*mes)++;
		if ((*mes)>12){
			*mes=1;
			(*anho)++;
		}
	}
}

void imprimir_fecha(int dia, int mes, int anho){
	printf("%02d/%02d/%d\n", dia, mes, anho);
}

void leer_anhos(int *anho_inicio, int *anho_fin){
	printf("Ingrese el año de inicio: ");
	scanf("%d", anho_inicio);
	printf("Ingrese el año de fin: ");
	scanf("%d", anho_fin);
}
