#include <stdio.h>

int main(){
	//recorrer el rango [1..12]
	for(int i=1; i<=12; i++){
		printf("Tabla del %d\n", i);
		
		for(int j=1; j<=12; j++){	
			printf("%d x %d = %d\n", i, j, i*j);
		}
		printf("\n");	
	}
	return 0;
}
