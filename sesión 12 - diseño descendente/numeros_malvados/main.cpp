#include <chrono>
#include <stdio.h>

int es_rango_valido(int inicio, int fin);

void procesar_rango(int inicio, int fin);

void calcular_porcentajes(int cant_malvado, int cant_odiosos, double * porc_malvados, double * porc_odiosos);

int es_malvado(int i);

int main() {
    int inicio, fin;
    printf("Ingrese el rango de números a evaluar: ");
    scanf("%d %d", &inicio, &fin);
    if (es_rango_valido(inicio, fin)) {
        procesar_rango(inicio, fin);
    } else {
        printf("Los valores ingresados para el rango no son válidos");
    }
    return 0;
}

int es_rango_valido(int inicio, int fin) {
    return inicio>0 && fin>0 && inicio<fin;
}

void procesar_rango(int inicio, int fin) {
    int cant_malvado = 0, cant_odiosos = 0;
    //recorro el rango [inicio..fin]
    for (int i=inicio; i<=fin; i++) {
        if (es_malvado(i)) {
            printf("El número %d es un número malvado\n", i);
            cant_malvado++;
        } else {
            printf("El número %d es un número odioso\n", i);
            cant_odiosos++;
        }
    }
    printf("---------Reporte------------------\n");
    double porc_malvados, porc_odiosos;
    calcular_porcentajes(cant_malvado, cant_odiosos, &porc_malvados, &porc_odiosos);
    printf("El porcentaje de números malvados es %lf\n", porc_malvados);
    printf("El porcentaje de odiosos malvados es %lf\n", porc_odiosos);
}

void calcular_porcentajes(int cant_malvado, int cant_odiosos, double *porc_malvados, double *porc_odiosos) {
    int total = cant_malvado+cant_odiosos;
    *porc_malvados = ((double)cant_malvado/total)*100;
    *porc_odiosos = ((double)cant_odiosos/total)*100;
}

int es_malvado(int numero) {
    /* 12 es 1100
     * 12 / 2 = 6
     * 12 % 2 = 0 (primer bit <- digito binario)
     *
     * 6 / 2 = 3
     * 6 % 2 = 0 (segundo bit <- digito binario)
     *
     * 3 / 2 = 1
     * 3 % 2 = 1 (tercer bit <- digito binario)
     *
     * 1 / 2 = 0 <-- este es el valor centinela
     * 1 % 2 = 1 (cuarto bit <- digito binario)
     */
    //hacemos acá un ciclo iterativo
    //controlado por CENTINELA
    //implementado con salida controlada
    int cociente, cant_unos = 0;
    do {
        cociente = numero /2;
        int digito_binario = numero % 2;
        if (digito_binario==1)
            cant_unos++;
        numero = cociente; // <<-- para hacer las divisiones sucesivas
    } while (cociente > 0);
    return cant_unos % 2 == 0;
}