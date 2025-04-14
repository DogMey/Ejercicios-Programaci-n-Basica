Algoritmo Calcular_VF
	Definir C,S,I Como Real
	Escribir "Buenas inversionista, ingrese el capital que desea invertir"
	Leer C
	Escribir "¿Cual es el porcentaje de interés anual?"
	Leer In
	Escribir "¿Cuantos años dejara para invertir?"
	Leer N
	Escribir "¿Cual es el número de su sistema de interés?"
	Escribir "   1. Mensual"
	Escribir "   2. Trimestral"
	Escribir "   3. Semestral"
	Escribir "   4. Anual"
	Leer P
	Segun P Hacer
		1:
			P=12
		2:
			P=4
		3:
			P=2
		4:
			P=1
	Fin Segun
	i=In/P
	i=i/100
	npc=N*P
	VF=C*(1+i)^npc
	Escribir "Su capital invertido es: ",C
	Escribir "El porcentaje de interés anual es: ",In
	Escribir "Los años que dejara en inversión serán: ",N
	Escribir "La tasa de interes efectiva capitalizable por cada periodo de tiempo es: ",i
	Escribir "El número de periodos capitalizables durante toda la inversión es: ",npc
	Escribir "El valor futuro de la inversión es: ",VF
FinAlgoritmo
