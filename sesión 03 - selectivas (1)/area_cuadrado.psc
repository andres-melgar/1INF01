Algoritmo EvaluarAreaCuadrado
	Escribir "Ingrese el lado: "
	Leer lado
	//Se hace la VALIDACI�N de los datos
	Si lado>0 Entonces
		area <- lado^2
		Escribir "El �rea del cuadrado de lado ", lado, " es ", area
	SiNo
		Escribir "El lado debe ser mayor que cero"
	FinSi		
FinAlgoritmo