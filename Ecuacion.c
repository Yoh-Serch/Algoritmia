#include<stdio.h>

float dato(char *);
float obtener_y();
float obtener_x();
void imprimir_resultado(float, float);

main()
{
	float A, B, C, D, E, F, y, x;
	printf("Programa que calcula una ecuacion de la forma\nAx + By = C\nDx + Ey = F\n");
	printf("Por favor ingrese los datos que se van pidiendo\n");
	A = dato("A");
	B = dato("B");
	C = dato("C");
	D = dato("D");
	E = dato("E");
	F = dato("F");
}

float dato(char *constante)
{
	float valor;
	printf("\tIngrese el valor de %c: ", *constante);
	scanf("%f", &valor);
	return valor;
}

float obtener_y()
{

}

float obtener_x()
{}

