#include <stdio.h>
#include <string.h>

int main()
{
	//Cadena en donde buscaremos
	char unaCadena[150] = "Esta aveces una aveces vez aveces un lobo que aveces tenia sed";
	//Cadena a buscar
	char palabra[50] = "aveces";

	//Indices para recorrer el arreglo y una varible que servira de contador
	int i = 0, j = 0, encontrada = 0;
	//Recorremos el arreglo donde buscaremos
	for (i=0; i<=strlen(unaCadena);i++)
	{
		//Si el caracter de la pos en la que estamos es igual a la posicion j de la palabra aumentamos j en 1
		if(unaCadena[i] == palabra[j])
		{
			j++;
			//Si j es menor(long-1) a la longitud de la cadena buscada y la posicion siguiente de la cadena a buscar es un espacio hemos encontrado la palabra :D
			if(j==strlen(palabra) && unaCadena[i+1]==' ')
			{
				encontrada++;
				//Una vez encontrada la palabra reiniciamos j para empear a buscar
				j=0;
			}
		}else{
			j = 0;
		}
	}
	printf("La palabra \"%s\" se encontro %i veces.\n", palabra, encontrada);
	
	return 0;
}
