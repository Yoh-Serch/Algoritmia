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
	scanf("%i", &*anio);
	validar_anio(1000, 2000, &*anio);
}

void validar_anio(int inicio, int fin, int *anio)
{
	while(*anio < inicio || *anio > fin)
	{
		printf("El valor ingresado no esta dentro del rango(%i), ingrese el valor de nuevo::",*anio);
		scanf("%i", &*anio);
	}
}

void detectar_millar(int *anio)
{
	int restante;
	restante = *anio / 1000;
	imprimir_caracter(restante, 'M');
	*anio = *anio - (restante*1000);
}

void detectar_centenas(int *anio)
{
	int restante;
	if (*anio >= 900){
		restante = 9;
		imprimir_caracter(1, 'C');
		imprimir_caracter(1, 'M');
	} else if(*anio >= 600 && *anio<900){
		restante = (*anio / 100) - 5;
		imprimir_caracter(1,'D');
		imprimir_caracter(restante,'C');
		restante += 5;
	} else if(*anio >= 500 && *anio < 600){
		restante = 5;
		imprimir_caracter(1, 'D');
	} else if(*anio >= 400 && *anio <= 500){
		restante = 4;
		imprimir_caracter(1, 'C');
		imprimir_caracter(1,'D');
	}else{
		restante = *anio / 100;
		imprimir_caracter(restante, 'C');
	}
	*anio = *anio - (restante * 100);
}

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

void imprimir_caracter(int veces, char letra)
{
	int contador = 1;
	while(contador <= veces)
	{
		printf("%c", letra);
		contador++;
	}
}