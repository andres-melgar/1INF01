Algoritmo Mostrar_Impares
	contador <- 0
	centinela <- Falso
	Mientras no centinela Hacer
		Escribir "Ingrese el n´umero impar: "
		Leer num
		Si num mod 2 = 1 Entonces
			contador <- contador + 1
		SiNo
			centinela <- Verdadero
		FinSi
	FinMientras
	Escribir "La cantidad de números impares leídos es ", contador
FinAlgoritmo
