#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
SE DESEA CALCULAR  INDEPENDIENTEMENTE LA SUMA DE NÚMEROS PARES E IMPARES (ENTEROS) COMPRENDIDO ENTRE 1 Y N, DONDE N ES UN NÚMERO ACCESADO POR EL USUARIO QUE     DETERMINA EL RANGO MÁXIMO A SUMAR. 
*/

main()
{
      int rep=0;
      do
      {
          int n=0,acum_p=0,acum_i=0,v_i=1;
          printf ("Programa que calcula la suma de numeros pares e impares entre 1 y N\n\n");
          printf ("Ingrese e valor de n: ");
          scanf ("%i",&n);
          while (v_i<=n)
            {
                  if (v_i%2==0)
                     acum_p=acum_p+v_i;
                  else 
                       acum_i=acum_i+v_i;
                     v_i++;
                  }
          printf ("La suma de los numeros pares entre 1 y %i es: %i\n",n,acum_p);
          printf ("La suma de los numeros impares entre 1 y %i es: %i\n\n",n,acum_i);
          printf ("Quiere repetir el programa?? 1=SI 2=NO: ");
          scanf ("%i",&rep);
          while (rep<1 || rep>2)
          {
                printf ("La opcion elegida es invalida, ingrese de nuevo: ");
                scanf ("%i",&rep);
                }
      }
      while(rep==1);
      }
