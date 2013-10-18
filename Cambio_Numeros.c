#include<stdio.h>

void leer_dato(int*, char);
void encontrar_mayor(int*, int*, int*);
void encontrar_medio(int*, int*);
void imprimir(int*, int*, int*);
void validar_numero(int*);

main()
{
	int mayor, medio, menor;
	//Leemos los datos
	leer_dato(&mayor, '1');
	leer_dato(&medio, '2');
	leer_dato(&menor, '3');
	//Encontramos el numero mayor
	encontrar_mayor(&mayor, &medio, &menor);
	//Encontramos el numero menor
	encontrar_medio(&medio, &menor);
	//Imprimimos en el orden indicado
	imprimir(&mayor, &medio, &menor);
}
//Funcion que lee un dato
void leer_dato(int *dato, char valor)
{
	printf("Ingrese el valor #%c:: ", valor);
	scanf("%i", &*dato);
}
//Funcion que valida que sea positivo (0>)
void validar_numero(int *numero)
{
	while(*numero <= 0)
	{
		printf("El numero tiene que ser positivo, ingresa otro::");
		scanf("%i", &*numero);
	}
}

//Funcion que permite encontrar el numero mayor de valores ingresados 3
void encontrar_mayor(int *mayor, int *medio, int *menor)
{
	int apoyo;
	if (*medio > *menor && *medio > *mayor){
		apoyo = *mayor;
		*mayor = *medio;
		*medio = apoyo;
	} else if(*menor > *mayor && *menor > *medio){
		apoyo = *mayor;
		*mayor = *menor;
		*menor = apoyo;
	}		
}

//Funcion que encuentra el numero medio de 3 valores ingresados
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

//Funcion que imprime los valores ya ordenados
void imprimir(int *mayor, int *medio, int *menor)
{
	printf("%i, %i, %i", *medio, *menor, *mayor);
}

