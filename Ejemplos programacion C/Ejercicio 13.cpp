#include<stdio.h>
#include<stdlib.h>
/*
Programador: Duran Gomez Sergio Israel
Grupo: 4IM10
DISEÑAR UN ALGORITMO QUE REALICE LAS SIGUIENTES CONVERSIONES.
*	METROS A CENTÍMETRO
*	CENTÍMETROS A METROS
*	KILÓMETROS A CENTÍMETROS
*	METROS A PIES
*	PIES A PULGADAS
*	YARDAS A CENTÍMETROS
*/

main()
{
      int rep=1,opc=0;
      float m=0,c=0,k=0,p=0,pul=0,y=0;
      while (rep==1)
      {
            printf ("Programa que realiza conversiones...\n");
            printf ("1=Metros a centimetros\n");
            printf ("2=Centimetros a metros\n");
            printf ("3=Kilometros a centimetros\n");
            printf ("4=Metros a Pies\n");
            printf ("5=Pies a pulgadas\n");
            printf ("6=Yardas a centimetros\n");
            printf ("Que conversion desea hacer?: ");
            scanf ("%i",&opc);
            switch (opc)
            {
                   case 1:
                        printf ("Ingrese la longitud en metros: ");
                        scanf ("%f",&m);
                              c=m*100;
                        printf ("El valor en centimetros es: %.2f\n",c);
                   break;
                        case 2:
                             printf ("Ingrese la longitud en centimetros: ");
                             scanf ("%f",&c);
                                   m=c/100;
                             printf ("El valor en metros es: %.2f\n",m);
                        break;
                             case 3:
                                  printf ("Ingrese la longitud en Kilometros: ");
                                  scanf ("%f",&k);
                                        c=k*1000;
                                  printf ("El valor en centimetros es: %.2f\n",c);
                             break;
                                  case 4:
                                       printf ("Ingrese la longitud en metros: ");
                                       scanf ("%f",&m);
                                             p=m*3.28;
                                       printf ("El valor en pies es: %.2f\n",p);
                                  break;
                                       case 5:
                                            printf ("Ingrese la longitud en pies: ");
                                            scanf ("%f",&p);
                                                  p=pul*12;
                                            printf ("El valor en pulgadas es: %.2f\n",pul);
                                       break;
                                            case 6:
                                                 printf ("Ingrese la longitud en yardas: ");
                                                 scanf ("%f",&y);
                                                       c=y*91.44;
                                                 printf ("El valor en centimetros es: %.2f\n",c);
                                            break;
                   }
            printf ("Desea realizar otro tipo de conversion? 1=SI 2=NO: ");
            scanf ("%i",&opc);
            while (opc<1 || opc>2)
            {
                  printf ("Opcion invalida, ingrese de nuevo: ");
                  scanf ("%i",&opc);
                  }
            printf ("----------------------------------------------------------------------------\n");
            }
      }
