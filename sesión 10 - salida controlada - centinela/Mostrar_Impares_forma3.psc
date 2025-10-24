Algoritmo Mostrar_Impares
	contador <- 0
	Repetir
		Escribir "Ingrese el número impar: "
		Leer num
		Si num mod 2 = 1 Entonces
			contador <- contador + 1		
		FinSi
	Mientras Que num mod 2 = 1
	Escribir "La cantidad de números impares leídos es ", contador
FinAlgoritmo
