#include <stdio.h>

void menu_principal();
void menu_func_trig();
void menu_func_mate();
void validar_opcion();
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
	printf("Menu de funciones trigonometricas\n");
	printf("1)Seno de X\n2)Cos de X\n3)Tan de X\n4)Regresar al menu anterior\n");
	printf("Elija una opcion:: ");
	scanf("%i", &opcion);
	validar_opcion(&opcion, 4);
}

void menu_func_mate()
{
}
