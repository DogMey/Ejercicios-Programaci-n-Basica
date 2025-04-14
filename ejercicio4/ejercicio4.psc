Algoritmo sin_titulo
		Definir cod,edad,peso,alt Como Entero
		Definir pro,i Como Real
		Definir Name, prog Como Cadena
		Nadmi <- 0
		n <- 0
		i <- 0
		Escribir 'Escriba el numero de aspirantes que desea valorar'
		Leer n
		Escribir 'Ingrese los datos del estudiante'
		Mientras i<n Hacer
			Escribir 'Nombre:'
			Leer Name
			Escribir 'Codigo:'		
			Leer cod		
			Escribir 'Porgrama al que pertenece:'
			Leer prog
			Escribir 'Edad en años:'
			Leer edad
			Escribir 'Peso en kilogramos:'
			Leer peso
			Escribir 'Altura:'
			Leer alt
			Escribir 'Promedio acumulado con un digito significativo'
			Leer pro
			Si edad<=18 Entonces
				Si peso<=60 Entonces
					Si alt>=180 Entonces
						Si pro>=4.5 Entonces
							Escribir 'Aspirante admitido'
							Admi <- Admi+1
							Total <- Total+1
						SiNo
							Escribir 'Aspirante rechazado'
							Nadmi <- Nadmi+1
							Total <- Total+1
						FinSi
					SiNo
						Escribir 'Aspirante rechazado'
						Nadmi <- Nadmi+1
						Total <- Total+1	
					FinSi
				SiNo
					Escribir 'Aspirante rechazado'
					Nadmi <- Nadmi+1
					Total <- Total+1
				FinSi
			SiNo
				Escribir 'Aspirante rechazado'
				Nadmi <- Nadmi+1
				Total <- Total+1	
			FinSi
			i <- i+1
		FinMientras
		Escribir 'El numero de aspirantes admitidos fue de:',Admi
		Escribir "Nombres", Name
		Escribir"Codigo", cod
		Escribir"Programa", prog
		Escribir"Edad", edad
		Escribir"Peso", peso
		Escribir"Altura", alt
		Escribir"Promedio", pro
		Escribir 'El numero de estudiantes rechazados fue de:',Nadmi	
		Escribir 'El numero total de aspirantes valorados fue de:', n
FinAlgoritmo
