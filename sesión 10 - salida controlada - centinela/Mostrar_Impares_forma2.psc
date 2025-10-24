Algoritmo Mostrar_Impares
	contador <- 0
	num <- 1
	Mientras num mod 2 = 1 Hacer
		Escribir "Ingrese el número impar: "
		Leer num
		Si num mod 2 = 1 Entonces
			contador <- contador + 1		
		FinSi
	FinMientras
	Escribir "La cantidad de números impares leídos es ", contador
FinAlgoritmo
