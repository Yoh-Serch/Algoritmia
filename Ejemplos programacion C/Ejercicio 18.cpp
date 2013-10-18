#include<stdio.h>
#include<stdlib.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 3IM10

***CIERTA UNIVERSIDAD ESTA INTERESADA EN SABER ESTADÍSTICAMENTE LA CALIFICACIÓN MEDIA DE LOS ESTUDIANTES QUE RECIBIERON PROGRAMACIÓN
 DURANTE UN SEMESTRE. DESEA SABER TAMBIÉN EL NÚMERO TOTAL DE ESTUDIANTES REPROBADOS Y EL TOTAL DE APROBADOS POR SEXO. 
 CALCULAR LO ANTERIOR TENIENDO EN CUENTA QUE SE LEEN LAS CALIFICACIONES Y EL SEXO.***
*/
main()
{
      int rep=0,i,v=0,n=0,r_m=0,r_h=0,a_m=0,a_h=0;
      int opc;
      float acum=0,prom=0,calf=0;
      do{
           r_m=0;
           r_h=0;
           a_m=0;
           a_h=0; 
            printf ("Cuantos alumnos cursaron la materia de programacion?: ");
          scanf ("%i",&v);
          while (v<0)
          {
                printf ("El valor no puede ser negativo, ingrese de nuevo: ");
                scanf ("%",&v);
                }
                fflush(stdin);
                float calificaciones[v];
                for (i=0;i<=(v-1);i++)
                {
                printf ("El alumno es mujer (1) u hombre (2): ");
                scanf ("%i",&opc);
                while (opc<1 || opc>2)
                {
                      printf ("Opcion invalida, ingrese de nuevo: ");
                      scanf ("%i",&opc);
                      }
                switch (opc)
                {
                case 1: 
                     printf ("Ingrese la calificacion del alumno %i: ",i+1);
                     scanf ("%f",&calificaciones[i]);
                     while (calificaciones[i]<0 || calificaciones[i]>10)
                     {
                           printf ("La calificacion tiene que estar en un rango de 0-10, ingrese de nuevo");
                           scanf ("%f",&calificaciones[i]);
                           } 
                     if (calificaciones[i]>5)
                        {a_m+=1;}
                        else
                            {r_m+=1;}
                     break;
                     case 2:
                          printf ("Ingrese la calificacion del alumno %i: ",i+1);
                          scanf ("%f",&calificaciones[i]);
                          while (calificaciones[i]<0 || calificaciones[i]>10)
                          {
                                printf ("La calificacion tiene que estar en un rango de 0-10, ingrese de nuevo");
                                scanf ("%f",&calificaciones[i]);
                           } 
                           if (calificaciones[i]>5)
                           {a_h+=1;}
                           else
                           {r_h+=1;}
                          break;
                       }
                       fflush(stdin);
                }
          printf ("\nA continuacion se mostraran los resultados:\n\n");
          printf ("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
          printf ("\xBA La cantidas de mujeres reprobadas es: %i\n",r_m);
          printf ("\xBA La cantidad de mujeres aprobadas es: %i\n",a_m);
          printf ("\xBA La cantidad de hombres reprobados es: %i\n",r_h);
          printf ("\xBA La cantidad de hombres aprobados es: %i\n",a_h);
          printf ("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
            printf ("\nDesea repetir el programa?? 1=SI 2=NO");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
                  {printf ("Opcion invalida, ingrese de nuevo: ");
                        scanf ("%i",&rep);}
                  }
      while (rep==1);
      system("PAUSE");
      }
