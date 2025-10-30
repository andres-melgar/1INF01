#include <stdio.h>

int main(){
	//recorrer el rango [1..12]
	int i=1;
	while(i<=12){
		printf("Tabla del %d\n", i);
		
		int j=1;
		while(j<=12){
			printf("%d x %d = %d\n", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
