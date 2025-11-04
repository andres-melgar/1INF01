#include <stdio.h>
#define VALOR_CENTINELA 0

void leer_datos(int * mes, int * anho);

int es_valido(int mes, int anho);

void imprime_calendario(int mes, int anho);

int obtener_dia_inicio(int mes, int anho);

int obtener_max_dias_mes(int mes, int anho);

int es_bisiesto(int anho);

int main() {
    while (1) {
        int mes, anho;
        leer_datos(&mes, &anho);
        if (mes==VALOR_CENTINELA && anho==VALOR_CENTINELA) {
            break;
            //es una estructura de ruptura de flujo
            //hace que se acabe la iteración
            //no se ejecuta nada de lo que está debajo del break
        }
        if (es_valido(mes, anho)) {
            imprime_calendario(mes, anho);
        }
    }
    return 0;
}

void leer_datos(int *mes, int *anho) {
    printf("Ingrese mes: ");
    scanf("%d", mes);
    printf("Ingrese anho: ");
    scanf("%d", anho);
}

int es_valido(int mes, int anho) {
    if (mes<1 || mes>12) {
        printf("El mes ingresado no es correcto\n");
        return 0;
    } else if (anho<2000 || anho>2099) {
        printf("El anho ingresado no es correcto\n");
        return 0;
    }
    return 1;
}

void imprime_calendario(int mes, int anho) {
    int dia_inicio = obtener_dia_inicio(mes, anho);
    int max_dias_mes = obtener_max_dias_mes(mes, anho);
    printf("\nD  L  M  X  J  V  S\n");
    int dia = 1;
    int i,j;
    for (i =1; i<=6; i++) { //representa las filas del calendario
        for (j=0; j<=6; j++) {
            if ((i==1 && j>=dia_inicio) || i>1) {
                printf("%02d ", dia);
                dia++;
            } else
                printf("   ");
            if (dia>max_dias_mes) {
                break;
            }
        }
        printf("\n");
        if (dia>max_dias_mes) {
            break;
        }
    }
    printf("\n");
}

int obtener_dia_inicio(int mes, int anho) {
    int cifras = anho % 100;
    int B = cifras + cifras/4;
    int C = 0;
    if ((mes==1 || mes ==2) && es_bisiesto(anho))
        C = -1;
    int D = 0;
    if (mes==8)
        D = 1;
    else if (mes==2 || mes==3 || mes==11)
        D = 2;
    else if (mes==6)
        D = 3;
    else if (mes==9 || mes==12)
        D = 4;
    else if (mes==4 || mes==7)
        D = 5;
    else if (mes==1 || mes==10)
        D=6;
    int E=1;
    return (B+C+D+E) % 7;
}

int obtener_max_dias_mes(int mes, int anho) {
    int cant_max_dias_mes;
    if (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) {
        cant_max_dias_mes = 31;
    } else if (mes ==4 || mes==6 || mes==9 || mes==11) {
        cant_max_dias_mes = 30;
    } else {
        cant_max_dias_mes = 28;
        if (es_bisiesto(anho))
            cant_max_dias_mes++;
    }
    return cant_max_dias_mes;
}

int es_bisiesto(int anho) {
    return (anho%4==0) && ((anho %400==0)||(anho%100!=0));
}