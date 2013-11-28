#include <stdio.h>
#include <stdlib.h>

void imprimir(int, double*);

int main()
{
	double *add;
	int tamano;
	printf("Ingrese el tamaño del arreglo:: ");
	scanf("%i", &tamano);
	add = (double*)malloc(tamano*sizeof(double));
	if(add == NULL)
	{
		printf("Error en la asignacion de memoria");
	} else{
		int i;

		for(i=0;i<tamano;i++)
		{
			printf("%i.- Ingrese un numero:: ", i+1);
			scanf("%lf", &add[i]);
		}
		imprimir(tamano, add);
		free(add);
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