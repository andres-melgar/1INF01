Algoritmo Mostrar_Impares
	contador <- 0
	Repetir
		Escribir "Ingrese el n�mero impar: "
		Leer num
		Si num mod 2 = 1 Entonces
			contador <- contador + 1		
		FinSi
	Mientras Que num mod 2 = 1
	Escribir "La cantidad de n�meros impares le�dos es ", contador
FinAlgoritmo
