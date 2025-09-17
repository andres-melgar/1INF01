Algoritmo techo_propio
	Escribir "Ingrese el tipo de acción a realizar (C-Comprar, X-Construir o M-Mejora):"
	Leer tipoAccion
	//Validamos el tipo de acción
	Si tipoAccion='C' o tipoAccion='X' o tipoAccion='M' Entonces
		//Pedir el ingreso mensual
		Escribir "Ingrese el ingreso familiar mensual"
		Leer ingresoMensual
		//Valido el ingreso mensual
		Si ingresoMensual>0 Entonces
			//Evaluamos si accede al bono
			Si (ingresoMensual<=3715 y tipoAccion='C') o (ingresoMensual<=2706 y (tipoAccion='X' o tipoAccion='M')) Entonces
				//hay bono, ahora pregunto por tipoAccion
				Si tipoAccion='C' Entonces
					bono<-44805
				SiNo
					Si tipoAccion='X' Entonces
						bono<-30900
					SiNo //queda que sea M
						bono<-11845
					FinSi
				FinSi
				
			Sino //ingresoMensual<=0, bono=0
				Escribir "No cumple con la condición del ingreso mensual, no accede al bono"
				bono<-0
			FinSi
			//Preguntamos por el monto total a financiar
			Escribir "Ingrese el monto total a financiar"
			leer montoFinanciar
			Si montoFinanciar>0 Entonces
				//pregunto por la cantidad de años
				Escribir "Ingrese la cantidad de años"
				Leer anhos
				Si anhos>0 Entonces
					//Pregunto si quiere cuota doble
					Escribir "Ingrese si desea cuota doble en Julio y Diciembre (S-Sí o N-No)"
					Leer cuotaDoble
					Si cuotaDoble='S' o cuotaDoble='N' Entonces
						Si cuotaDoble='N' Entonces
							//sin cuota doble
							cuotaMensual<-(montoFinanciar-bono)*1.2/(12*anhos)
						SiNo //S
							//con cuota doble
							cuotaMensual<-(montoFinanciar-bono)*1.2/(14*anhos)							
						FinSi
						//Impresión de resultados
						Escribir "Datos del financiamiento"
						Escribir "Monto total a financiar: ",montoFinanciar
						Escribir "Bono: ",bono
						Escribir "Monto a financiar en cuotas: ",montoFinanciar-bono
						Escribir "Monto en cuota normal: ",cuotaMensual
						Si cuotaDoble='S' Entonces
							Escribir "Monto en cuota doble: ",cuotaMensual*2
						FinSi
					SiNo
						Escribir "La cuota ingresada no es correcta"
						
					FinSi
				Sino	
					Escribir "La cantidad de años no es correcta"
				FinSi
			Sino
				Escribir "El monto a financiar no es correcto"
			FinSi
		Sino
			Escribir "El ingreso mensual no es correcto"
		FinSi
	Sino
		Escribir "El tipo de acción ingresado no es correcto"
	FinSi
	
FinAlgoritmo
