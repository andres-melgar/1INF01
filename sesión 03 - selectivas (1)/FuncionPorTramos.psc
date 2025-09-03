Algoritmo FuncionPorTramos
	Escribir "Ingrese el valor de x: "
	Leer x
	Si x<5 Entonces
		resultado <- x^2
	SiNo
		Si x< 10 Entonces
			resultado <- x^3-1
		SiNo
			resultado <- x/2
		FinSi
	FinSi
	Escribir "El resultado es: ", resultado
FinAlgoritmo
