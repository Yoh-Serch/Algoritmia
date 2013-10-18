#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
DADOS DOS NÚMEROS DESDE EL TECLADO, CALCULE LA SUMA Y EL PRODUCTO DE AMBOS Y QUE VERIFIQUE CUAL DE LOS  CÁLCULOS ES MENOR, SI LA SUMA ES MENOR QUE EL PRODUCTO, QUE REGRESE A LEER OTRO PAR DE VALORES, DESPUÉS DE HABER IMPRESO "LA SUMA ES MENOR".SI       EL PRODUCTO ES MENOR A LA SUMA, QUE IMPRIMA "EL PRODUCTO ES MENOR" Y QUE SE      DETENGA .
*/

main()
{
int num_1=0,num_2=0,rep=0,suma=0,producto=0;
      do
      {
      printf ("Ingrese el valor #1: ");
      scanf ("%i",&num_1);
      printf ("Ingrese el valor #2: ");
      scanf ("%i",&num_2);
      suma=num_1+num_2;
      producto=num_1*num_2;
      while (suma<producto)
      {
         printf ("La suma es menor!\n");
         printf ("Ingrese otro par de valores\n");
         printf ("Ingrese el valor #1: ");
         scanf ("%i",&num_1);
         printf ("Ingrese el valor #2: ");
         scanf ("%i",&num_2);
         suma=num_1+num_2;
         producto=num_1*num_2;
                        }
          printf ("La suma es mayor!!\n\n");
          printf ("Desea repetir el programa?? 1=SI 2=NO: ");
          scanf ("%i",&rep);
          while (rep<1 || rep >2)
          {
                printf ("Opcion invalida, ingrese de nuevo");
                scanf ("%i",&rep);
                }
          }
      while (rep==1);
      }
