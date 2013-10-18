#include<stdlib.h>
#include<stdio.h>
/*
Programa: Durán Gómez Sergio Israel
Grupo: 3IM10
***PROGRAMA PARA CALCULAR EL PROMEDIO DE CALIFICACIONES DE UN ESTUDIANTE.  
LOS DATOS DISPONIBLES SON NOMBRE Y 3 CALIFICACIONES DE LOS EXAMENES.***
*/
main()
{
      float calificaciones[3],prom=0,acum=0;
      int i,rep=1;
      char nombre[25];
      while (rep==1)
      {
         printf ("Ingrese el 1er nombre del alumno: ");
         scanf ("%s",&nombre); 
            for (i=0;i<=2;i++)
            {
                printf ("Ingrese la calificacion del examen %i:",i+1);
                scanf ("%f",&calificaciones[i]);
                while (calificaciones[i]<0 || calificaciones[i]>10)
                {
                      printf ("Calificacion no valida debe estar en un rango de 0-10,ingrese de nuevo: ");
                      scanf ("%f",&calificaciones[i]);
                      }
                acum=acum+calificaciones[i];
            }
            prom=acum/3;
            printf ("Las calificaciones del alumno %s son: \n",nombre);
            printf ("C1 \t C2\t C3\n");
            for (i=0;i<=2;i++)
            {
                printf ("%.2f\t",calificaciones[i]);
            }
            printf ("\n\nY su promedio es: %.2f\n\n",prom);
            
            printf ("Desea ingresar las calificaciones de otro alumno? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("Valor invalido, ingrese de nuevo!: ");
                  scanf ("%i",&rep);
                  }
            }
            system ("PAUSE");
      }
