#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
REALIZAR UN PROGRAMA DETERMINE LO SIGUIENTE:
A)EL PERÍMETRO DE UN TRIÁNGULO, B) EL PROMEDIO DE LOS 3 LADOS DEL TRIÁNGULO Y C) EL LADO MAYOR              
*/

main()
{
int rep=0;
      do
      {
      float a=0,b=0,c=0,prom=0,perimetro=0;
      char mayor; 
                 printf ("Programa que calcula:\n");
                 printf("perimetro de un triangulo,el promedio de sus lados y cual lado es el mayor\n");
                 printf ("Por favor ingrese el lado A: ");
                 scanf ("%f",&a);
                 while (a<0)
                 {
                       printf ("El valor no puede ser negativo, ingrese de nuevo");
                       scanf ("%f",&a);
                       }
                 printf ("Ingrese el lado B: ");
                 scanf ("%f",&b);
                 while (a<0)
                 {
                       printf ("El valor no puede ser negativo, ingrese de nuevo");
                       scanf ("%f",&b);
                       }
                 printf ("Ingrese el lado C: ");
                 scanf ("%f",&c);
                 while (a<0)
                 {
                       printf ("El valor no puede ser negativo, ingrese de nuevo");
                       scanf ("%f",&c);
                       }
                 perimetro=a*b*c;
                 prom=((a+b+c)/3);
                 printf ("El primetro es igual a: %.1f\n",perimetro);
                 printf ("El promedio de sus lados es: %.2f\n",prom);
                 if (a>b)
                    if (a>c)
                       mayor='A';
                    else
                        mayor='C';
                 else
                     if(b>c)
                            mayor='B';
                                      else mayor='C';
                 printf ("El lado mayor es el: %c\n\n",mayor);
                 
                 printf ("Desea repetir e programa?? 1=SI 2=NO: ");
                 scanf ("%i",&rep);
                 while (rep<1 || rep>2)
                 {
                       printf ("opcion invalida, ingrese de nuevo!: ");
                       scanf ("%i",&rep);
                       }
                 }
      while (rep==1);
      system("PAUSE");
      }
