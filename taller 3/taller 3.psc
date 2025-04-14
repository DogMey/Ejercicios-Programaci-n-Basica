Funcion Cuadrado <- x2 (x)
	Mientras i<=100
		x<-n^2
		n<-n+1
		i<-i+1
		Escribir n,"^2=",x
	Fin mientras
Fin Funcion
Funcion Cubo <- x3 (x)
	Mientras i<=100
		x<-n^3
		n<-n+1
		i<-i+1
		Escribir n,"^3=",x
    Fin mientras
Fin Funcion
Algoritmo Taller
	x<-0
	n<-0
	Escribir"oxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxo"
	Escribir"   Con este algoritmo usted podra saber las potencias  " 
	Escribir"    cuadradas y cubicas de los numeros del 1 al 100    "
	Escribir"oxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxo"
	Escribir Sin Saltar "potencias de 2_", x2(x), "Potencias de 3_", x3(x)
FinAlgoritmo