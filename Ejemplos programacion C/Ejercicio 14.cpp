#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
REALIZAR UN PROGRAMA QUE ACEPTE 3 NÚMEROS DISTINTOS Y DETERMINE LO SIGUIENTE:                   A)EL PROMEDIO DE LOS 3 NÚMEROS , B) EL MAYOR DE LOS 3 NÚMEROS Y C) LA SUMA DE LOS 3 NÚMEROS
*/

main()
{
      int rep=1,i,v=0;
      float acum=0,prom=0,may=0;
      while (rep==1)
      {
            printf ("Programa que calcula el promedio,el mayor,y la suma de N numeros\n");
            printf ("Cuantos numeros desea ingresar?: ");
            scanf ("%i",&v);
            float numeros[v];
            for (i=0;i<=(v-1);i++)
            {
                printf ("Ingrese el valor numero %i: ",i+1);
                scanf ("%f",&numeros[i]);
                acum=acum+numeros[i];
            }
            prom=acum/v;
            may=numeros[0];
            for (i=0;i<=(v-1);i++)
            {
                if (numeros[i]>may)
                {may=numeros[i];}
            }
            printf ("----------------------------------------------------\n");
            printf ("El promedio de los numeros ingresados es: %.2f\n",prom);
            printf ("El numero mayor es: %.0f\n",may);
            printf ("La suma de todos los numeros es: %.0f\n\n",acum);
            printf ("Quiere repetir el programa? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("La opcion no es valida, ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            }
      }
