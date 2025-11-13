#include <stdio.h>

int verificarCapicuaBicentenario(int );
void buscarCapicuas(int ,int *,int *,int *,int *);

int main(){
	int numero,capicuaizq,capicuader,desplazamientoizq,desplazamientoder,desplazamientomen=100000000;
	int numdesplazamientomen,nuevodesplazamientomen;
	int i,cantnum,verificar;
	printf("Ingrese la cantidad de números a evaluar: ");
	scanf("%d",&cantnum);
	if (cantnum>0){
		for(i=1;i<=cantnum;i++){
			printf("Ingresa un número: ");
			scanf("%d",&numero);
			if (numero>0){
				verificar=verificarCapicuaBicentenario(numero);
				if (!verificar){
					printf("El número ingresado %d no es capicúa bicentenario, por ello se buscará el capicúa bicentenario más cercano\n",numero);
					buscarCapicuas(numero,&capicuaizq,&desplazamientoizq,&capicuader,&desplazamientoder); 	
					if (abs(desplazamientoizq)<abs(desplazamientoder)){
						printf("El capicúa bicentenario más cercano es %d y su desplazamiento es: %d\n\n",capicuaizq, desplazamientoizq);
						nuevodesplazamientomen=fabs(desplazamientoizq);
					}
					else{
						printf("El capicúa bicentenario más cercano es %d y su desplazamiento es: %d\n\n",capicuader, desplazamientoder);
						nuevodesplazamientomen=fabs(desplazamientoder);
					}					

					if (nuevodesplazamientomen<desplazamientomen){
						desplazamientomen=nuevodesplazamientomen;
						numdesplazamientomen=numero;
					}	
				}
				else
					printf("El número ingresado es capicúa bicentenario\n\n");
			}
			else
				printf ("El número ingresado debe ser mayor a cero\n\n");
		}
		printf("El número que tiene el capicúa bicentenario con desplazamiento más cercano es %d",numdesplazamientomen);	
	}
	else
		printf ("La cantidad de números a evaluar debe ser mayor a cero\n");
	return 0;
}

/*
TABLA DE DATOS: 1238502
 iteracion numero aux capicua suma dig
0 1238502 1238502 0 0 1
1 1238502 123850 2 2 2
2 1238502 12385 20 2 0
3 1238502 1238 205 7 5
4 1238502 123 2058 15 8
5 1238502 12 20583 18 3
6 1238502 1 205832 20 2
7 1238502 0 2058321 21 1
*/
int verificarCapicuaBicentenario(int numero){
	int aux=numero, capicua=0;
	int suma=0,dig;
	//printf("\n TABLA DE DATOS: %d\n ", numero);
	//printf("iteracion numero aux capicua suma dig\n");
	//printf("%d %d %d %d %d %d\n", 0, numero, aux, capicua, suma, dig);
	//int i=1;
	while (aux>0){
		dig= aux % 10;
		aux = aux / 10;
		capicua=capicua*10+dig;
		suma=suma+dig;
		//printf("%d %d %d %d %d %d\n", i++, numero, aux, capicua, suma, dig);
	}
	return (numero==capicua) && (suma==21); 	
}

void buscarCapicuas(int numero,int *capicuaizq,int *desplazamientoizq,int *capicuader,int *desplazamientoder){
	int encontradoizq=0,encontradoder=0;;
	*desplazamientoizq=0,*desplazamientoder=0;
	*capicuaizq=numero,*capicuader=numero;
	while (encontradoizq!=1){
		(*capicuaizq)--;
		(*desplazamientoizq)--;
		encontradoizq=verificarCapicuaBicentenario(*capicuaizq);
	}
	while (encontradoder!=1){
		(*capicuader)++;
		(*desplazamientoder)++;
		encontradoder=verificarCapicuaBicentenario(*capicuader);
	}	
}
