#include<stdio.h>
#include<stdlib.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo:3IM10

***11.	HACER UN PROGRAMA QUE LEA UN NUMERO DE PIES Y CALCULE E IMPRIMA SU EQUIVALENTE EN
 YARDAS, PULGADAS, CENTIMETROS Y METROS.***
*/
main()
{
      int rep=1;
      float pies=0,yardas=0,cent=0,m=0,pulgadas=0;
      while (rep==1)
      {
            printf ("Programa que calcula el numero convierte de pies a:\n");
            printf ("Yardas,Pulgadas,Centimetros,Metros...\n");
            printf ("Ingrese el valor en Pies: ");
            scanf ("%f",&pies);
            yardas=pies*0.3333;
            pulgadas=pies*12;
            cent=pies*30.48;
            m=pies*0.30480;
            printf ("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
            printf ("\xBA El valor en yardas es: %.2f\n",yardas);
            printf ("\xBA El valor en pulgadas es: %.2f\n",pulgadas);
            printf ("\xBA El valor en centimetros es: %.2f\n",cent);
            printf ("\xBA El valor en metros es: %.2f\n",m);
            printf ("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
            printf ("Desea calcular la conversion con otro valor? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("El valor no es valido, ingrese de nuevo");
                  scanf ("%i",&rep);
                  }
            }
      }
