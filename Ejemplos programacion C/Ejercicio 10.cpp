#include<stdlib.h>
#include<stdio.h>
/*	
Programador: Duran Gomez Sergio Israel
Grupo: 3IM10

***EL SIGUIENTE SISTEMA DE ECUACIONES LINEALES:
ax + by = c
dx + ey = f
Se puede resolver con las fórmulas:
x=(ce-bf)/(ae-bd)
y=(af-cd)/(ae-bd)
Si  ae - bd != 0
ELABORAR UN PROGRAMA QUE LEA LOS COEFICIENTES a, b, c, d, e y f, Y QUE CALCULE E IMPRIMA LOS VALORES DE X Y Y.***
*/

main()
{
      int rep=1;
      float a=0,b=0,c=0,d=0,e=0,f=0,x=0,y=0,con1=0,con2=0,condicion=0;
      while (rep==1)
      {
          printf ("Programa que calcula 'x' y 'y' segun sistema de ecuaciones:\n");
          printf ("ax + by = c, y dx + ey = f\n");
          printf ("Por favor ingrese el valor de 'a': ");
          scanf ("%f",&a);
          printf ("El valor de 'b': ");
          scanf ("%f",&b);
          printf ("El valor de 'c': ");
          scanf ("%f",&c);
          printf ("El valor de 'd': ");
          scanf ("%f",&d);
          printf ("El valor de 'e': ");
          scanf ("%f",&e);
          printf ("Y el valor de 'f': ");
          scanf ("%f",&f);
          con1=(a*e);
          con2=(b*d);
          condicion=con1-con2;
          if (condicion !=0)
          {
                        x=((c*e)-(b*f))/((a*e)-(b*d));
                        y=((a*f)-(c*d))/((a*e)-(b*d));
                        printf ("El valor de 'x' es: %.1f\n",x);
                        printf ("El valor de 'y' es: %.1f\n",y);
                        }
          else
          {
              printf ("El resultado de ae - bd es =0 por lo tanto 'x' y 'y' valen 0");
          }
          printf ("Desea realizar la operacion de nuevo? 1=SI 2=NO ");
          scanf ("%i",&rep);
          while (rep<1 || rep>2)
          {
                printf ("Opcion invalida, ingrese de nuevo");
                scanf ("%i",&rep);
                }
            }
            system ("PAUSE");
      }
