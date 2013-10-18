#include <stdio.h>
#include <math.h>
#define PI 3.1416

void menu_principal();
void menu_func_trig();
void menu_func_mate();
void ejecutar_acciones(int, int);
void validar_opcion();

//Funciones de los menus
void leer_angulo(float*);
void convertir_angulo(char, float*);

void elevar_potencia();
void raiz_cuadrada();
void logaritmo();
void imprimir(float*);
//Fin funciones de los menus
main()
{
	int opcion;
	menu_principal(&opcion);
}

void menu_principal()
{
	int opcion;
	printf("Menu Principal\n");
	printf("1)Funciones Trigonometricas\n2)Funciones matematicas\n3)Salida\n");
	printf("Elija una opcion:: ");
	scanf("%i", &opcion);
	validar_opcion(&opcion, 3);
	if(opcion == 1){
		menu_func_trig();
	}else if(opcion == 2){
		menu_func_mate();
	}
}

void validar_opcion(int *valor, int rango)
{
	while(*valor < 1 || *valor> rango)
	{
		printf("La opcion elegida es incorrecta, ingrese una valida:: ");
		scanf("%i", &*valor);
	}
}

void menu_func_trig()
{
	int opcion;
	printf("::::Menu de funciones trigonometricas::::\n");
	printf("1)Seno de X\n2)Cos de X\n3)Tan de X\n4)Regresar al menu anterior\n");
	printf("\tElija una opcion:: ");
	scanf("%i", &opcion);
	validar_opcion(&opcion, 4);
	ejecutar_acciones(1, opcion);
}

void menu_func_mate()
{
	int opcion;
	printf("::::Menu de funciones matematicas::::\n");
	printf("1)Elevar un numero a cualquier potencia\n2)Calcular raiz cuadrada de un numero\n3)El logaritmo de un numero\n4)Regresar al menu anterior\n");
	printf("\tElija una opcion:: ");
	scanf("%i", &opcion);
	validar_opcion(&opcion, 4);
	ejecutar_acciones(2, opcion);
}

void ejecutar_acciones(int menu, int opcion)
{
	if(opcion == 4)
	{
		menu_principal();
	}else
	{
		if(menu == 1)
		{
			float angulo = 0;
			leer_angulo(&angulo);
			convertir_angulo('r', &angulo);
			switch(opcion)
			{
				case 1:
					angulo =  sinf(angulo);
					break;
				case 2:
					angulo =  cosf(angulo);
					break;
				case 3:
					angulo =  tanf(angulo);
					break;
			}
			printf("El resultado es:: %.4f \n", angulo);
			menu_func_trig();
		}else
		{
			switch(opcion)
			{
				case 1:
					elevar_potencia();
					break;
				case 2:
					raiz_cuadrada();
					break;
				case 3:
					logaritmo();
					break;
			}
			menu_func_mate();
		}
	}
}

void leer_angulo(float *angulo)
{
	printf("Ingrese el numero de grados:: ");
	scanf("%f", &*angulo);
}
void convertir_angulo(char opcion, float *angulo)
{
		*angulo =  (*angulo * PI) / 180;
}


void elevar_potencia()
{
	float base, numero;
	printf("Ingrese el valor a elevar:: ");
	scanf("%f", &numero);
	printf("Ingrese la base de la potencia:: ");
	scanf("%f", &base);
	numero = powf(base, numero);
	imprimir(&numero);
}
void raiz_cuadrada()
{
	float numero;
	printf("Ingrese el numero para sacar raíz:: ");
	scanf("%f", &numero);

	numero = sqrt(numero);
	imprimir(&numero);
}
void logaritmo()
{
	float numero;
	printf("Ingrese el numero para obtener logaritmo:: ");
	scanf("%f", &numero);

	numero = logf(numero);
	imprimir(&numero);
}

void imprimir(float *valor)
{
	printf("El resultado es:: %.2f", *valor);
}
