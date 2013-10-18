#include<stdlib.h>
#include<stdio.h>
/* 
Programador: Durán Gómez Sergio Israel
Grupo: 3IM10

***PROGRAMA QUE CALCULE E IMPRIMA EL PRECIO DE VENTA DE UN ARTICULO. 
SE TIENEN LOS DATOS DE DESCRIPCION DEL ARTICULO Y COSTO DE PRODUCCION. 
EL PRECIO DE VENTA SE CALCULA AÑADIENDO AL COSTO EL 120% DE UTILIDAD Y EL 15% DE IMPUESTO.***
*/
main()
{
      int rep=1,opc=0;
      float costop=0,costo=0,pv=0,;
      while (rep==1){
            printf ("Que articulo desea comprar?\n");
            printf("1=Pelota costo produccion=$10\n");
            printf("2=Canicas costo produccion=$15\n");
            printf ("3=Trompo costo produccion=$18\n");
            printf ("4=Otro:\n");
            scanf ("%i",&opc);
            while (opc<0){
                  printf ("El valor debe ser positivo! Ingrese de nuevo: ");
                  scanf ("%i",&opc);}
            switch (opc){
            case 1:
                 costop=10*2.20;
                 pv=costop*1.15;
                 break;
            case 2:
                 costop=15*2.20;
                 pv=costop*1.15;
                 break;
            case 3:
                 costop=18*2.20;
                 pv=costop*1.15;
                 break;
            default:
            printf ("Cual es el costo de produccion?");
                 scanf ("%f",&costo);
                 while (costo<0){
                 printf ("El valor debe ser positivo! Ingrese de nuevo: ");
                 scanf ("%f",&costo);}
                 costop=costo*2.20;
                 pv=costop*1.15;
                    break;
            }
            printf ("------------------------------------------\n");
            printf ("El precio de venta del articulo es: %.2f|\n",pv);
            printf ("------------------------------------------\n");
            printf ("Desea ver el precio de venta de otro producto? 1=SI 2=NO:\xB2 ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("Valor invalido,Ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            printf ("------------------------------------------------------------\n");
                  }
      system ("PASUE");
      }
