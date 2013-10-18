#include<stdlib.h>
#include<stdio.h>
/*
Programador: Durán Gómez Sergio Israel
Grupo: 4IM10

***ELABORAR UN PROGRAMA PARA CALCULAR E IMPRIMIR EL SUELDO DE UN EMPLEADO.***
*/
main()
{
      int sueldo=0,rep=1,dias=0,i,st=0,acum=0;
      while(rep==1){
                   printf ("Cuantos dias trabajo el usuario??: ");
                   scanf ("%i",&dias);
                   while (dias<0)
                   {
                    printf ("Error no puedo haber trabajado dias negativos!! xD, ingrese de nuevo\n");
                    printf ("Cuantos dias trabajo el usuario??: ");
                    scanf ("%i",&dias); }  
                   dias-1;
      int horas[dias];
          for (i=0;i<=(dias-1);i++)
          {
              printf ("Cuantas horas trabajo el dia %i: ",i+1);
              scanf ("%i",&horas[i]);
              acum=acum+horas[i];
          }
          printf ("\n\n");
          printf ("Cual es su sueldo por hora!?: ");
          scanf ("%i",&sueldo);
          
          st=acum*sueldo;
          printf ("\n");
          printf ("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
          printf ("\xBA El sueldo total del empleado es: %i\xBA\n",st);
          printf ("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
          printf ("Desea calcular el sueldo de otro empleado?: ");
          scanf ("%i",&rep);
          while (rep<1 || rep>2)
          {
                printf ("El valor ingresado es incorrecto! Ingrese de nuevo :D");
                printf ("Desea calcular el sueldo de otro empleado?: ");
                scanf ("%i",&rep);
          }
          }     
      system ("PAUSE");
      }
