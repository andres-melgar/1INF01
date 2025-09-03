Algoritmo EvaluarAreaCuadrado
	Escribir "Ingrese el lado: "
	Leer lado
	//Se hace la VALIDACIÓN de los datos
	Si lado>0 Entonces
		area <- lado^2
		Escribir "El área del cuadrado de lado ", lado, " es ", area
	SiNo
		Escribir "El lado debe ser mayor que cero"
	FinSi		
FinAlgoritmo