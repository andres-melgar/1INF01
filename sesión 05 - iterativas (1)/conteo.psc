Algoritmo Conteo_de_pares
	contador <- 0
	i <- 0
	Mientras i<10 Hacer
		Si i mod 2=0 Entonces
			contador <- contador +1
		FinSi
		i <- i+1
	FinMientras
	Escribir "Hay ", contador, " número pares"
FinAlgoritmo
