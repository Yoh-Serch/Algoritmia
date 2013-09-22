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
	imprimir_resultado(x, y);
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
	printf("Calculando y...\n");
	float y, y1, y2, resta;
	y1 = D * C;
	y2 = D * B;
	resta = (-y2 + E);
	y = ((F * A) - y1)/resta;
	return y;
}

float obtener_x(float A, float B, float C, float y)
{
	printf("Calculando x...\n");
	float x;
	x = (C - (B * y))/A;
	return x;
}

void imprimir_resultado(float x, float y)
{
	printf("Los calculos han sido realizados...\n");
	printf("El valor de x es: %f \n", x);
	printf("El valor de y es: %f \n", y);
}

