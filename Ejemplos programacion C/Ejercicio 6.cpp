#include<stdlib.h>
#include<stdio.h>
/*
Programador: Durán Gómez Sergio Israel
Grupo: 3IM10

***HACER UN PROGRAMA QUE CALCULE E IMPRIMA EL COSTO DE PRODUCCION DE UN ARTICULO, 
TENIENDO COMO DATOS LA DESCRIPCION Y EL NUMERO DE UNIDADES PRODUCIDAS.***
*/
main()
{
      int rep=1,articulos=0;
      float cpi=0,cpt=0;
      while (rep==1)
      {
            printf ("Cual es el costo de produccion total del lote??");
            scanf ("%f",&cpt);
            while (cpt<0)
            {
                  printf ("Costo invalido, ingrese de nuevo!");
                  scanf ("%f",&cpt);
                  }
            printf ("Cuantos articulos tiene el lote?");
            scanf ("%i",&articulos);
            while (articulos<0)
            {
                  printf ("Cantidad invalida, ingrese de nuevo!");
                  scanf ("%i",&articulos);
                  }
            cpi=cpt/articulos;
            printf ("\n\n");
            printf ("El costo de produccion individual es: %.2f\n",cpi);
            printf ("\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n");
            printf ("Desea calcular otro costo de produccion? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("Valor invalido, ingrese de nuevo!");
                  scanf ("%i",&rep);
                  }
            }
      }
