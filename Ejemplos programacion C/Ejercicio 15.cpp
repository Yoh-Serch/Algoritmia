#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
ELABORE UN PROGRAMA QUE RESUELVA SISTEMAS DE ECUACIONES LINEALES CON DOS INCÓGNITAS.
*/

main()
{
      float a=0,b=0,c=0,d=0,e=0,f=0,rep=0,con1=0,con2=0,condicion=0,x=0,y=0;
      do
      {
                 printf ("Ingrese valores segun el siguiente formato: __X+__Y=__\n");
                 printf ("\xB0\xB0\xB0\xB0\xB0 --Ecuacion 1-- \xB0\xB0\xB0\xB0\xB0\n");
                 printf ("Coeficiente 1: ");
                 scanf ("%f",&a);
                 printf ("Coeficiente 2: ");
                 scanf ("%f",&b);
                 printf ("Resultado: ");
                 scanf ("%f",&c);
                 printf ("\xB0\xB0\xB0\xB0\xB0 --Ecuacion 2-- \xB0\xB0\xB0\xB0\xB0\n");
                 printf ("Coeficiente 1: ");
                 scanf ("%f",&d);
                 printf ("Coeficiente 2: ");
                 scanf ("%f",&e);
                 printf ("Resultado: ");
                 scanf ("%f",&f);
                 printf ("\n\n\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\n\n");
                 printf ("Sus ecuaciones son:\n-----------------\n");
                 printf ("%.0fX + %.0fY=%.0f\n------------------\n",a,b,c);
                 printf ("%.0fX + %.0fY=%.0f\n------------------\n",d,e,f);
                 printf ("\n A continuacion se mostraran los resultados: \n\n");
                 
                 con1=(a*e);
                 con2=(b*d);
                 condicion=con1-con2;
                 if (condicion !=0)
                 {
                        x=((c*e)-(b*f))/((a*e)-(b*d));
                        y=((a*f)-(c*d))/((a*e)-(b*d));
                        printf ("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                        printf ("El valor de 'x' es: %.2f\n",x);
                        printf ("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
                        printf ("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                        printf ("El valor de 'y' es: %.2f\n",y);
                        printf ("\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
                        }
                        else
                        {
                            printf ("El resultado de ae - bd es =0 por lo tanto 'x' y 'y' valen 0");
                            }
                 }
      while (rep==1);
      system ("PAUSE");
}
