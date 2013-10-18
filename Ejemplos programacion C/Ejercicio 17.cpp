#include<stdio.h>
#include<stdlib.h>
/*
Programador: Durán Gómez Sergio Israel
Grupo: 4IM10
HAGA UN DIAGRAMA QUE IMPRIMA LOS NÚMEROS PARES QUE SE ENCUENTREN ENTRE EL  NÚMERO A Y B . EL DIAGRAMA DEBERÁ VALIDAD QUE EL NÚMERO A SIEMPRE SEA MENOR   QUE EL NÚMERO B, ESTOS NÚMEROS LOS DEBE ACEPTAR POR EL TECLADO.   
*/

main()
{
      int rep=1, lim_1=0,lim_2=0,i;
      while (rep==1)
      {
            printf ("Ingrese el limite menor: ");
            scanf ("%i",&lim_1);
            printf ("Ingrese el limite mayor: ");
            scanf ("%i",&lim_2);
            while (lim_1>lim_2)
            {
                  printf ("El limite menor no puede ser mayor que el mayor, ingrese de nuevo los datos:\n");
                  printf ("Ingrese el limite menor: ");
                  scanf ("%i",&lim_1);
                  printf ("Ingrese el limite mayor: ");
                  scanf ("%i",&lim_2);
                  }
            printf ("Los numeros pares que estan entre %i y %i son: \n",lim_1,lim_2);
            while (lim_1<=lim_2)
            {
                  if (lim_1%2==0)
                  {
                     printf ("%i, ",lim_1);
                                 }
                     lim_1++;
                  }
            printf ("\n\nDesea calcular los numeros pares con otros parametros?? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("Opcion invalida, ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            }
      }
