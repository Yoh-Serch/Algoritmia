#include<stdio.h>

void leer_dato(int*, char);
void encontrar_mayor(int* int* int*);
void encontrar_medio(int*, int*);
void imprimir(int*, int*, int*);
void validar_numero(int*);

main()
{
	int mayor, medio, menor;
	leer_datos(&mayor, '1');
	leer_dato(&medio, '2');
	leer_dato(&menor, '3');
}

void leer_dato(int *dato, char valor)
{
	printf("Ingrese el valor #%c", valor);
	scanf("%i", &*dato);
}

