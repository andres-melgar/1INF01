#include <stdio.h>

int main(){
	int sumatoria = 0;
	int i=0;
	while(i<10){
		sumatoria += i; //equivale a sumatoria = sumatoria + i
		i++;
	}
	printf("La sumatoria es %d\n", sumatoria);
	return 0;
}
