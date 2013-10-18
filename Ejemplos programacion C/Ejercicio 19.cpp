#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
CALCULAR EL PERÍMETRO Y LA SUPERFICIE DE UN CUADRADO DADA LA LONGITUD DE SU LADO.
*/

main()
{
      int lado=0, area=0, perimetro=0,rep=0;
      do
      {
      printf ("Programa que calcula el area y perimetro de un cuadrado\n");
      printf ("Ingrese la longitud del lado: ");
      scanf ("%i",&lado);
      perimetro=lado*4;
      area=lado*lado;
      printf ("\n\nEl perimetro del cuadrado es: %i\n",perimetro);
      printf ("El area del cuadrado es: %i\n",area);
      printf ("\nDesea repetir el programa?? 1=SI 2=NO: ");
      scanf ("%i",&rep);
      while (rep<1 || rep>2)
      {
            printf ("Opcion invalida, ingrese de nuevo: ");
            scanf ("%i",&rep);
            }
                 }
      while (rep==1);
      }
