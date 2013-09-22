#include<stdio.h>
//Funcion para pedir datos
float dato(char *);
//Funcion que calcula el valor de y
float obtener_y(float, float, float, float, float, float);
//Funcion que calcula el valor de x
float obtener_x(float, float, float, float);
//Funcion que imprime resultados
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
	//Calculamos valores necesarios
	y1 = D * C;
	//Calculamos un posible valor de y
	y2 = D * B;
	//Restamos los dos valores de y
	resta = (-y2 + E);
	//Obtenemos el valor de y
	y = ((F * A) - y1)/resta;
	return y;
}

float obtener_x(float A, float B, float C, float y)
{
	printf("Calculando x...\n");
	float x;
	//Calculamos x y regresamos valor
	x = (C - (B * y))/A;
	return x;
}

void imprimir_resultado(float x, float y)
{
	printf("Los calculos han sido realizados...\n");
	printf("El valor de x es: %f \n", x);
	printf("El valor de y es: %f \n", y);
}

