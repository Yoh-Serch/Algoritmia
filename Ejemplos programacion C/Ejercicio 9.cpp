#include<stdio.h>
#include<stdlib.h>
/*
Programa: Durán Gómez Sergio Israel
Grupo: 3IM10

***UNA TEMPERATURA EN GRADOS CENTIGRADOS (C) SE PUEDE CONVERTIR A SU EQUIVALENTE FAHRENHEIT (F) 
CON LA FORMULA: F=9/5C+32  HACER UN PROGRAMA QUE PERMITA OBTENER LA TEMPERATURA DE AMBOS.***
*/
main()
{
      int rep=1,opc=0;
      float cels=0,fahr=0,resultado=0;
            printf ("Programa que convierte de:\n");
      while (rep==1)
            {
            printf ("Que tipo de conversion desea realizar: \xBA\n");
            printf ("1= Celsius a Fahrenheit.\n");
            printf ("2= Fahrenheit a Celsius.\n");
            printf ("Ingrese la opcion deseada: ");
            scanf ("%i",&opc);
            while (opc<1 || opc>2)
            {
                  printf ("opcion no valida,ingrese una correcta: ");
                  scanf ("%i",&opc);
                  }
            switch (opc)
            {
                   case 1:
                        printf ("Ingrese el numero de grados celsius: ");
                        scanf ("%f",&cels);
                        resultado=((cels*9)/5)+32;
                        printf ("El resultado es: %.2f\xF8 F\n",resultado);
                        break;
                        case 2:
                             printf ("Ingrese el numero de grados Fahrenheit: ");
                             scanf ("%f",&fahr);
                             resultado=((fahr-32)*5)/9;
                             printf ("El resultado es: %.2f\xF8 C\n",resultado);
                             break;
                   }
            printf ("Quiere hacer otra conversion? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("Opcion no valida, ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            printf ("\n\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
            }
            system ("PAUSE");
      }
