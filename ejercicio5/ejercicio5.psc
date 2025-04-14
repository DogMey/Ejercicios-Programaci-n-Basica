Algoritmo euler
	Definir n,s Como Entero
	Definir e Como Real
	x<-1
	F<-1
	i<-1
	b<-1
	Escribir "Ingrese su numero al que quiere conocer su aproximacion de la serie del numero euler, teniendo en cuenta que mientras mas grande sea el número mas cerca esta del valor del numero de euler"
	Leer N
	Si n<=0 
		Escribir "este número no es valido"
	SiNo
		Escribir "El numero de euler sería"
		Repetir
			e=(1/F)
			F=F*i
			i=i+1
			a=e
			b=c
			c=a+b
			Escribir e
		Hasta Que i>N
		escribir "este es el enesimo numero del numero de euler ",e, " y este es su total ",c
	FinSi
FinAlgoritmo
