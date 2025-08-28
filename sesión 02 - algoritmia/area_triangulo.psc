Algoritmo EvaluarAreaTriangulo
	Escribir "Ingrese los lados: "
	Leer l1, l2, l3
	s <- (l1+l2+l3)/2
	area <- rc(s*(s-l1)*(s-l2)*(s-l3))
	Escribir "El área es: ", area
FinAlgoritmo
