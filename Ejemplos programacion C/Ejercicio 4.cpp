#include<stdlib.h>
#include<stdio.h>
/*
Programador: Durán Gómez Sergio Israel
Grupo: 3IM10

***PROGRAMA QUE OBTENGA E IMPRIMA EL VALOR DE Y A PARTIR DE LA ECUACIÓN:Y=3X^2+7X-15***
*/
main ()
{
     float y=0;
     int x=0,rep=1;
     while (rep==1)
     {
          printf ("Programa que calcula el valor de Y a partir de la ecuacion: Y=3x^2+7x-15\n\n");
          printf ("Cual es el valor de 'x'??");
          scanf ("%i",&x); 
          y=(3*(x*x))+((7*x)-15);
          printf ("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
          printf ("\xBA El valor de 'Y' es: %.2f\xBA\n",y);
          printf ("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
          printf ("\n Desea calcular el valor de 'y' con otro valor de 'x'? 1=SI 2=NO");
          scanf ("%i",&rep);
          while (rep<1 || rep>2)
          {
                printf ("Valor invalido,ingrese de nuevo: ");
                scanf ("%i",&rep);
                }
           }
     system ("PAUSE");
 }
