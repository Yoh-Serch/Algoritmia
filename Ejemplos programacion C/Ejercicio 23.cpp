#include<stdlib.h>
#include<stdio.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
ELABORE UN PROGRAMA QUE CALCULE LAS TABLAS DE MULTIPLICAR DE 1 AL 10.
*/

main()
{
      int rep=0;
      do
      {
                 int tablas[10][10],i,j;
                 
                 for (i=1;i<=10;i++)
                 {
                     for (j=1;j<=10;j++)
                     {
                         tablas[i][j]=(i*j);
                     }
                 }
                 printf ("\t\t        \xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                 printf ("\t\t\t\xBATABLAS DE MULTIPLICAR\xBA\n");
                 printf ("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
                 printf ("\xBA 1\t2\t3\t4\t5\t6\t7\t8\t9\t10 \xBA\n");
                 printf ("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
                 for (i=1;i<=10;i++)
                 {
                     printf ("  ");
                     for (j=1;j<=10;j++)
                     {
                         printf ("%i\t",tablas[i][j]);
                     }
                 }
                 
      printf ("Desea ver las tablas de nuevo?? 1=SI 2=NO");
      scanf ("%",&rep);
      while (rep<1 || rep>2)
      {
            printf ("Opcion invalida, ingrese de nuevo");
            scanf ("%i",&rep);
            }
      }
      while (rep==1);
      }
