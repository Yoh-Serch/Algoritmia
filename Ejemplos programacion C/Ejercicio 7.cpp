#include<stdlib.h>
#include<stdio.h>
/*	

Programa: Durán Gómez Sergio Israel
Grupo: 3IM10

HACER UN PROGRAMA QUE IMPRIMA EL COSTO DE UN TERRENO RECTANGULAR, 
TENIENDO COMO DATOS LA ANCHURA Y LA LONGITUD EN METROS, Y EL COSTO DE METRO CUADRADO.
*/

main()
{
      int rep=1,opc=0;
      float costo=0,h=0,l=0,a=0;
      while (rep==1)
      {
            printf ("Bienvenido!!, a continuacion ingrese los datos para su cotizacion:\xBA\n");
            printf ("Ingrese la longitud en metros lineales: ");
            scanf ("%f",&l);
            while (l<0)
            {
                  printf ("Longitud no valida, ingrese de nuevo: ");
                  scanf ("%f",&l);
                  }
            printf ("Ingrese el ancho en metros lineales: ");
            scanf ("%f",&h);
            while (h<0)
            {
                  printf ("Ancho no valido, ingrese de nuevo: ");
                  scanf ("%f",&h);
                  }
            a=l*h;
            printf ("El area en metros cuadrados es: %.2f\n\n",a);
            printf ("Las cotizaciones disponibles son:\n");
            printf ("1=1050.20 el m^2\n");
            printf ("2=1650.30 el m^2\n");
            printf ("3=2000.70 el m^2\n");
            printf ("Cual es su eleccion?: ");
            scanf ("%i",&opc);
            while (opc<1 || opc>3)
            {
                  printf ("El valor es invalido ingrese uno correcto: ");
                  scanf ("%i",&opc);
                  }
            switch (opc){
                   case 1:
                        costo=1050.20*a;
                        break;
                        case 2:
                             costo=1650.30*a;
                             break;
                                   case 3:
                                        costo=2000.70*a;
                                        break;
                                        }
            printf ("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
            printf ("\xBA El costo de su terreno seria: $%.2f\xBA\n",costo);
            printf ("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
            printf ("Desea realizar otra cotizacion? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("valor invalido,ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            printf ("\n\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
            }
            system ("PAUSE");
      }
