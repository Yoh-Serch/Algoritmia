#include<stdlib.h>
#include<stdio.h>
/*
Programa: Durán Gómez Sergio Israel
Grupo: 3IM10

***HACER UN PROGRAMA QUE CONVIERTA UN NUMERO DADO DE SEGUNDOS EN MINUTOS, 
Y QUE IMPRIMA EL RESULTADO.***
*/
main()
{
      int rep=1;
      float segundos=0,minutos=0;
      while (rep==1)
      {
            printf ("Programa que realiza una convercion de minutos a segundos\n\n");
            printf ("Ingrese la cantidad de segundos: ");
            scanf ("%f",&segundos);
            while (segundos<0)
            {
                  printf ("El valor no puede ser negativo, ingrese uno positivo: ");
                  scanf ("%f",&segundos);
                  }
            minutos=(segundos/60);
            printf ("La cantidad de minutos es: %.2f\n",minutos);
            printf ("Quiere hacer otra conversion? 1=SI 2=NO");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("El valor ingresado es incorrecto,intente de nuevo: ");
                  scanf ("%i",&rep);
            }
            }
      system("PAUSE");
      }
      
