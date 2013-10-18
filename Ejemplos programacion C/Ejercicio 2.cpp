#include<stdlib.h>
#include<stdio.h>
/*
Programador: Durán Gómez Sergio Israel
Grupo: 3IM10
Programa que calcula el area de un triangulo a partir de datos ingresados por el usuario
*/
main()
{
      int rep=1;
      float a=0,b=0,h=0;
      while (rep==1)
      {
            printf ("Cual es la base (b) del triangulo?: ");
            scanf ("%f",&b);
            while (b<0)
            {printf ("Valor de la base no valido! Ingrese de nuevo: ");
            scanf ("%f",&b);}
            printf ("Cual es la altura (h) del triangulo?: ");
            scanf ("%f",&h);
            while (h<0)
            {printf ("Valor de la altura no valido! Ingrese de nuevo: ");
            scanf ("%f",&h);}
            a=(b*h)/2;
            printf ("\n\n");
            printf ("El area (a) del triangulo es: %.2f\n\n",a);
            printf ("Desea calcular el area de otro triangulo? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2){
                  printf ("Valor invalido, Ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            }
      system ("PAUSE");
      }
