#include <stdio.h>
#include <stdlib.h>

void imprimir(int, double*);

int main()
{
	double *array;
	int tamano;
	printf("Ingrese el tamaño del arreglo:: ");
	scanf("%i", &tamano);
	array = (double*)malloc(tamano*sizeof(double));
	if(array == NULL)
	{
		printf("Error en la asignacion de memoria\n");
		exit(-1);
	} else{
		int i;

		for(i=0;i<tamano;i++)
		{
			printf("%i.- Ingrese un numero:: ", i+1);
			scanf("%lf", &array[i]);
		}
		imprimir(tamano, array);
		free(array);
		printf("Fin del programa.\n");
	}
}

void imprimir(int tamano, double *arreglo)
{
	printf("Se imprimiran los valores ingresados");
	int i;
	for(i=0; i<tamano; i++)
	{
		printf("\n:: %lf", arreglo[i]);
	}
}