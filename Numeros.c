#include<stdio.h>


void leer_anio(int*);
void detectar_millar(int*);
void detectar_centenas(int*);
void detectar_decenas(int*);
void detectar_unidades(int*);
void validar_anio(int, int, int*);
void imprimir_caracter(int, char);


main()
{
	int anio;
	printf("Programa que evalua un numero arabico y lo convierte a romanos\n");
	leer_anio(&anio);
	detectar_millar(&anio);
	detectar_centenas(&anio);
	detectar_decenas(&anio);
	detectar_unidades(&anio);
	printf("\n");
}

void leer_anio(int *anio)
{
	printf("Ingrese un año(rango: 1000 - 2000)::");
	//Se lee el año y se valida que este entre el rango 1000 a 2000
	scanf("%i", &*anio);
	validar_anio(1000, 2000, &*anio);
}

//Funcion que valida que la cantidad este entre el rango establecido
void validar_anio(int inicio, int fin, int *anio)
{
	//Mientras año no este dentro del rango seguira piediendo el dato al usuario
	while(*anio < inicio || *anio > fin)
	{
		printf("El valor ingresado no esta dentro del rango(%i), ingrese el valor de nuevo::",*anio);
		scanf("%i", &*anio);
	}
}

//Funcion que permite saber cuantas M (1000) debera imprimir
void detectar_millar(int *anio)
{
	int restante;
	//restante almacena la parte entera de la división
	restante = *anio / 1000;
	//Imprimimos la cantidad (valor almacenado en restante) de M
	imprimir_caracter(restante, 'M');
	//Restamos al año los millares
	*anio = *anio - (restante*1000);
}

//Funcion que detecta la cantidad de centenas en el año
void detectar_centenas(int *anio)
{
	//Los numeros romanos arriba de 4 se conforman por combinaciones de otros numeros romanos...
	int restante;
	//Si es mayor o igual a 900 imprimira la combinacion CM
	if (*anio >= 900){
		//Asignamos a restante el valor de 9 (Más adelante se usa)
		restante = 9;
		imprimir_caracter(1, 'C');
		imprimir_caracter(1, 'M');
	} else if(*anio >= 500 && *anio<900){
		//Los valores mayores o iguales a 500 y menores que novecientos se conforman por la combinacion DCCCC...
		//Por lo cual para imprimir las C's le restamos al restante 5
		restante = (*anio / 100) - 5;
		imprimir_caracter(1,'D');
		imprimir_caracter(restante,'C');
		//Le volvemos a sumar 5 para el final de este algoritmo
		restante += 5;
	}else if(*anio >= 400 && *anio <= 500){
		//Si el valor es mayor o igual a 400 imprimimos CD
		restante = 4;
		imprimir_caracter(1, 'C');
		imprimir_caracter(1,'D');
	}else{
		//Si es menor que 400 imprimimos X cantidad de C's
		restante = *anio / 100;
		imprimir_caracter(restante, 'C');
	}
	//A año le restamos la cantidad de centenas 1,2,3,4....5 etc :)
	*anio = *anio - (restante * 100);
}

//Esta funcion contiene el mismo algoritmo de las centenas solo que con un 0 menos y cambia las letras que imprime en cada caso xD
void detectar_decenas(int *anio)
{
	int restante;
	if (*anio >= 90){
		restante = 9,
		imprimir_caracter(1, 'X');
		imprimir_caracter(1, 'L');
	} else if(*anio >= 60 && *anio < 90){
		restante = (*anio / 10) - 5;
		imprimir_caracter(1,'L');
		imprimir_caracter(restante,'X');
		restante += 5;
	} else if(*anio >= 50 && *anio < 60){
		restante = 5;
		imprimir_caracter(1, 'X');
	} else if(*anio >= 40 && *anio < 50){
		restante = 4;
		imprimir_caracter(1, 'X');
		imprimir_caracter(1,'L');
	}else{
		restante = *anio / 10;
		imprimir_caracter(restante, 'X');
	}
	*anio = *anio - (restante * 10);
}

//Funcion que detecta las unidades (pequeña variante del algoritmo anterior)
void detectar_unidades(int *anio)
{
	int restante;
	if (*anio == 9)
	{
		imprimir_caracter(1, 'X');
		imprimir_caracter(1, 'I');	
	} else if (*anio >= 5 && *anio < 90)
	{
		restante = (*anio - 5);
		imprimir_caracter(1,'V');
		imprimir_caracter(restante,'I');							
	} else if(*anio == 4)
	{
		imprimir_caracter(1,'I');
		imprimir_caracter(1,'V');					
	}else{
		imprimir_caracter(*anio, 'I');
	}
}

//Funcion que imprime cualquier caracter X cantidad de veces
void imprimir_caracter(int veces, char letra)
{
	int contador = 1;
	while(contador <= veces)
	{
		printf("%c", letra);
		contador++;
	}
}