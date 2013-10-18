#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
PROGRAMA QUE CALCULA LA SUPERFICIE DE UN CÍRCULO, UNA ESFERA O UN CILINDRO.
*/

float area(float a);
float esfera (float n);
float cilindro(float x, float y);

int main()
{
      int rep=1,opc=1;
      float r=0,h=0;
      while (rep==1)
      {
            printf ("Programa que calcula...\n");
            printf ("1=La superficie de un circulo\n");
            printf ("2=una esfera\n");
            printf ("3=un cilindro\n");
            printf ("Que desea hacer?: ");
            scanf ("%i",&opc);
            while (opc<1 || opc>3)
            {
                  printf ("Opcion invalida, por favor ingrese de nuevo");
                  scanf ("%i",&opc);
                  }
            switch (opc)
            {
                   case 1:
                        printf ("Ingrese el valor del radio: ");
                        scanf ("%f",&r);
                              while (r<0)
                               {
                                    printf ("El radio no puede ser negativo, ingrese de nuevo: ");
                                    scanf ("%f",&r);
                                    }
                                    printf ("El area es: %.2f\n",area(r));
                                    break;
                        case 2:
                             printf ("Ingrese el valor del radio: ");
                             scanf ("%f",&r);
                              while (r<0)
                              {
                               printf ("El radio no puede ser negativo, ingrese de nuevo: ");
                               scanf ("%f",&r);
                                }
                             printf ("El volumen es: %.2f\n",esfera(r));
                             break;
                        case 3:
                                  printf ("Ingrese el valor del radio: ");
                                  scanf ("%f",&r);
                                  while (r<0)
                                  {
                                        printf ("El radio no puede ser negativo, ingrese de nuevo: ");
                                        scanf ("%f",&r);
                                   }
                                  printf ("Ingrese el valor de la altura: ");
                                  scanf ("%f",&h);
                                  while (r<0)
                                  {
                                        printf ("La altura no puede ser negativa, ingrese de nuevo: ");
                                        scanf ("%f",&h);
                                        }
                                  printf ("El volumen es: %.2f\n",cilindro(r,h));
                                  break;
                   }
                   printf ("Desea repetir el programa? 1=SI 2=NO: ");
                   scanf ("%i",&rep);
                   while (rep<1 || rep>2)
                   {
                         printf ("El valor es invalido, ingrese de nuevo: ");
                         scanf ("%i",&rep);
                         }
            }
            system ("PAUSE");
      }
      
float area(float a)
{
      return 3.1416*(a*a);
      }
      
float esfera (float n)
{
      return ((3.1416*3)/4)*(n*n*n);
      }
      
float cilindro(float x, float y)
{
      return ((2*3.1416)*(x*x))*y;
      }
      
