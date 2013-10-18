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
	encontrar_mayor(&mayor, &medio, &menor);
	encontrar_medio(&medio, &menor);
	imprimir(&mayor, &medio, &menor);
}

void leer_dato(int *dato, char valor)
{
	printf("Ingrese el valor #%c", valor);
	scanf("%i", &*dato);
}

void validar_numero(int *numero)
{
	while(*numero <= 0)
	{
		printf("El numero tiene que ser positivo, ingresa otro::");
		scanf("%i", &*numero);
	}
}

void encontrar_mayor(int *mayor, int *medio, int *menor)
{
	int apoyo;
	if (*medio > *menor && *medio > *mayor){
		apoyo = *mayor;
		*mayor = *medio;
		*medio = apoyo;
	} else if(*menor > *mayor && *menor > *medio)){
		apoyo = *mayor;
		*mayor = *menor;
		*menor = apoyo;
	}		
}

void encontrar_medio(int *medio, int *menor)
{
	int apoyo;
	if (*menor > *medio)
	{
		apoyo = *medio;
		*medio = *menor;
		*menor = apoyo;
	}
}

void imprimir(int *mayor, int *medio, int *menor)
{
	printf("%i, %i, %i"", *medio, *menor, *mayor);
	}

