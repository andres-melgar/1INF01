Algoritmo Mostrar_Impares
	contador <- 0
	num <- 1
	Mientras num mod 2 = 1 Hacer
		Escribir "Ingrese el n�mero impar: "
		Leer num
		Si num mod 2 = 1 Entonces
			contador <- contador + 1		
		FinSi
	FinMientras
	Escribir "La cantidad de n�meros impares le�dos es ", contador
FinAlgoritmo
