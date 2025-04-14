Algoritmo ejercicio_1
	p<-0
	ng<-0
	c<-0
	Escribir "ingrese la cantidad de numeros a ingresar"
	Leer cant
	Repetir
		Escribir "de un numero"
		Leer n
		Si n Es Mayor O Igual A 0 Entonces
			Si n > 0 Entonces
				p<-p+1
			SiNo
				c<-c+1
			Fin Si
		SiNo
			ng<-ng+1
		Fin Si
		cont=cont+1
	Hasta Que cant=cont
	Escribir "El total de numeros analizados fue ", cant
	Escribir "Los numeros positivos escritos son: ", p
	Escribir "los numeros negativos escritos son: ", ng
	Escribir "Los numeros meutros son: ", c
FinAlgoritmo
