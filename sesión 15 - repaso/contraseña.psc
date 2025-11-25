Algoritmo Contrasenha
	Repetir
		Escribir "Ingrese una contraseña: "
		Leer num
		Si num>=1 Entonces
			//inicio: contar la cantidad de digitos
			clone_num <- num
			cant_digitos <- 0
			Mientras clone_num>0 Hacer
				clone_num <- trunc(clone_num/10) //para simular la división real
				cant_digitos <- cant_digitos+1
			FinMientras
			//fin: contar la cantidad de digitos
			Si cant_digitos <= 10 Entonces
				nueva_contrasenha <- 0
				//inicio: sacar par de dígitos
				clone_num <- num
				Mientras clone_num>0 Hacer
					parDigitos <- clone_num mod 100
					clone_num <- trunc(clone_num/100)
					//inicio: representación de bits de cada dígito
					digitoDer <- parDigitos mod 10
					digitoIzq <- trunc(parDigitos/10)
					nuevo_numero <- 0
					exponente <- 0
					//inicio: para el dígito derecho
					Mientras digitoDer>0 Hacer
						digito <- digitoDer mod 2
						digitoDer <- trunc(digitoDer/2)
						nuevo_numero <- nuevo_numero+digito*2^exponente
						exponente <- exponente + 1
					FinMientras
					//fin: para el dígito derecno
					//inicio: para el dígito izquierdo
					exponente <- 4
					Mientras digitoIzq>0 Hacer
						digito <- digitoIzq mod 2
						digitoIzq <- trunc(digitoIzq/2)
						nuevo_numero <- nuevo_numero+digito*2^exponente
						exponente <- exponente + 1
					FinMientras
					//inicio: formar la nueva contraseña
					//contar la cantidad de digitos de la nueva contraseña
					clone_nueva_contrasenha <- nueva_contrasenha
					cant_digitos <- 0
					Mientras clone_nueva_contrasenha>0 Hacer
						clone_nueva_contrasenha <- trunc(clone_nueva_contrasenha/10)
						cant_digitos <- cant_digitos+1
					FinMientras
					nueva_contrasenha <- nueva_contrasenha + nuevo_numero*(10^cant_digitos)					
					//fin: formar la nueva contraseña
					//fin: para el dígito izquierdo
					//fin: representación de bits de cada dígito
				FinMientras
				//fin: sacar par de dígitos
				Escribir nueva_contrasenha
			SiNo
				Escribir "La contraseña tiene más de 10 dígitos"
			FinSi
		FinSi
	Mientras Que num>=1  
FinAlgoritmo
