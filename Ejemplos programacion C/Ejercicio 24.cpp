#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
DESARROLLAR UN ALGORITMO QUE LEA UN NÚMERO POSITIVO Y LO ESCRIBA INVERTIDO.
*/

main()
{
      int rep=0;
      do
      {
                  char numero[10000];
                  int val=0,i;
                  printf ("Programa que lee un numero positivo y lo imprime al reves\n");
                  printf ("Ingrese un numero y presione 'enter': ");
                  gets(numero);
                  printf("Su numero al reves es : ");
                  for (int i=strlen(numero)-1; i >= 0;i--) 
                  {
                      putchar(numero[i]);
                      }
      printf ("\n\nDesea repetir el programa?? 1=SI 2=NO: ");
      scanf ("%i",&rep);
      while (rep<1 || rep>2)
      {
            printf ("Opcion invalida,ingrese de nuevo: ");
            scanf ("%i",&rep);
            }
                  }
      while(rep==1);
      }
