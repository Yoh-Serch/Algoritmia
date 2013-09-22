#include<stdio.h>

float dato(char *);
float obtener_y(float, float, float, float, float, float);
float obtener_x(float, float, float, float);
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
	y = obtener_y(A, B, C, D, E, F);
	x = obtener_x(A, B, C, y);
}

float dato(char *constante)
{
	float valor;
	printf("\tIngrese el valor de %c: ", *constante);
	scanf("%f", &valor);
	return valor;
}

float obtener_y(float A, float B, float C, float D, float E, float F)
{
	float y, y1, y2, resta;
	y1 = D * C;
	y2 = D * B;
	//printf("Valor de y1: %f \n Valor de y2: %f", y1, y2);
	resta = (-y2 + E);
	//printf("Valor de resta: %f", resta);
	y = ((F * A) - y1)/resta;
	//printf("Valor de y: %f \n",y );
	return y;
}

float obtener_x(float A, float B, float C, float y)
{
}

