#include<stdio.h>

float dato(char);
float obtener_y();
float obtener_x();
void imprimir_resultado(float, float);

main()
{
	float A, B, C, D, E, F, y, x;
	printf("Programa que calcula una ecuacion de la forma\nAx + By = C\nDx + Ey = F");
	printf("Por favor ingrese los datos que se van pidiendo");
	A = dato("A");
}

float dato(char constante)
{
	float valor;
	printf("Ingrese el valor de %c: ",constante);
	scanf("%f", &valor);
}

float obtener_y()
{}

float obtener_x()
{}

void imprimir_resultado(float, float)
{}