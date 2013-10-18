#include<stdio.h>
#include<stdlib.h>
/*
Programador: Durán Gómez Sergio Israel
Grupo: 3IM10

***16.	ELABORE UN DIAGRAMA DE FLUJO, EL CUAL ACEPTE LAS EDADES DE N PERSONAS Y DESPUÉS LAS ORDENE EN FORMA DESCENDENTE
, AL FINAL DEBERÁ DESPLEGAR EN PANTALLA LAS EDADES ORDENADAS Y MENORES A LA MEDIA.***
*/
float ordburbuja(float numeros[],int ord,int n);
int imprimir(float numeros[],int n);
float valores_menores(float numeros[],float media,int n);

int main()
{
      int rep=1,i,j,n=0,ord=0;
      float media=0,acum=0,acum2;
      while (rep==1)
      {
            printf ("Programa que lee N edades y los imprime ordenados de manera descendente o descendente\n");
            printf ("Cuantos personas son??: ");
            scanf ("%i",&n);
            while (n<0)
            {
                  printf ("El valor no puede ser negativo, ingrese uno positivo: ");
                  scanf ("%i",&n);
                  }
            float numeros[n];
            
            for (i=0;i<=(n-1);i++)
            {
                acum=0;
                printf ("Ingrese la edad %i: ",i+1);
                scanf ("%f",&numeros[i]);
                acum=acum+numeros[i];
            }
            media=(acum/n);
            printf ("La media es: %.2f\n\n",media);
            printf ("De que forma desea ordenar los valores?? 1=ASCENDENTE 2=DESCENDENTE: ");
            scanf ("%i",&ord);
            while (ord<1 || ord>2)
            {
                  printf ("La opcion es invalida, ingrese de nuevo!: ");
                  scanf ("%i",&ord);
                  }
            if (ord==1 || ord==2)
            {
                ordburbuja(numeros,ord,n);
                printf ("Los valores ordenados son: \n");
                imprimir(numeros,n);
                       }
            valores_menores(numeros,media,n);
            printf ("\nDesea repetir el programa?? 1=SI 2=NO: ");
            scanf ("%i",&rep);
            while (rep<1 || rep>2)
            {
                  printf ("Opcion invalida,ingrese de nuevo: ");
                  scanf ("%i",&rep);
                  }
            }
            system ("PAUSE");
      }
      
//Funcion para ordenar mediante el metodo de burbuja
float ordburbuja(float numeros[],int ord,int n)
      {
           int i,j;
           float aux=0;
           for (i=0;i<=(n-1);i++)
           {
               for (j=0;j<(n-1);j++)
               {
                   switch (ord)
                   {
                          case 1:
                               if (numeros[j]>numeros[j+1])
                               {
                               aux=numeros[j];
                               numeros[j]=numeros[j+1];
                               numeros[j+1]=aux;
                               }
                               break;
                               case 2:
                                    if(numeros[j]<numeros[j+1])
                                    {
                                    aux=numeros[j];
                                    numeros[j]=numeros[j+1];
                                    numeros[j+1]=aux;
                                    }
                                    break;
                   }
               }
           }
      return 0;
}
//Funcion para sacar valores menores a la media
float valores_menores(float numeros[],float media,int n)
{
      int v=0,i,j;
      float acum2;
      printf ("\nLos valores menores a la media son: \n");
          for (i=0;i<=(n-1);i++)
          {
          if (numeros[i]<media)
          {
            printf ("%.0f ",numeros[i]);                   
             }
             }
}
//funcion para imprimir los valores del arreglo
int imprimir(float numeros[],int n)
{
    int i;
    for (i=0;i<=(n-1);i++)
    {
        printf ("%.0f ",numeros[i]);
    }
    return 0;
}     
