#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
LEER n  NÚMEROS. DETERMINAR LA MEDIA DE LOS NÚMEROS NEGATIVOS Y LA MEDIA DE LOS 
NÚMEROS POSITIVOS.
*/

main()
{
      int rep=0;
      do
      {
          int v=0,i;
          float acum_p=0,acum_i=0,cont_p=0,cont_i=0,media_p=0,media_i=0;
          printf ("Programa que calcula la media de N numeros pares e impares\n");
          printf ("Cuantos valores quieres ingresar?: ");
          scanf ("%i",&v);
          while (v<0)
          {
                printf ("El valor no puede ser negativo, ingrese de nuevo: ");
                scanf ("%i",&v);
                }
          int numeros[v];
          
          for (i=0;i<=(v-1);i++)
          {
              printf ("Ingrese numero %i: ",i+1);
              scanf ("%i",&numeros[i]);
              
              if (numeros[i]%2==0)
              {acum_p=acum_p+numeros[i];
                cont_p=cont_p+1;}
              else
              {
                  acum_i=acum_i+numeros[i];
                  cont_i=cont_i+1;
              }
          }          
          media_p=(acum_p/cont_p);
          media_i=(acum_i/cont_i);
          printf ("\nLa media de los numeros pares es: %.1f",media_p);
          printf ("\nLa media de los numeros impares es: %.1f",media_i);
          printf ("\n\nDesea repetir este programa? 1=SI 2=NO: ");
          scanf ("%i",&rep);
          while (rep<1 || rep>2)
          {
                printf ("Opcion no valida, ingrese de nuevo: ");
                scanf ("%i",&rep);
                }
                 }
      while (rep==1);
      }
