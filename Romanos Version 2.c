/* Creado por: Juan Calderon */

#include<stdio.h>
void pide(int *);
void imp(int *, int *);
main() {
	int num, mul, coc;
	pide(&num);
	for(mul=1000; mul>=1; mul/=10) {
		coc=num/mul;		
		imp(&mul, &coc);
		num%=mul;	
	}
	printf("\n");
}
void pide(int *num) {
	do {
		printf("\nIngrese arabigo ");
		scanf("%i",num);
	} while(*num<=0 || *num>3999);
}
void imp(int *mul, int *coc) {
	char un, mi, des;
	switch(*mul) {
		case 1: un='I'; mi='V'; des='X'; break;
		case 10: un='X'; mi='L'; des='C'; break;
		case 100: un='C'; mi='D'; des='M'; break;
		case 1000: un='M'; break;	
	}	
	if((*coc)>=5){
		if((*coc)<=8)
			printf("%c",mi);
		mi = des;
		*coc -= 5;
	}
	if((*coc)<=3) {
		int n;
		for(n=0; n<(*coc); n++)
			printf("%c", un);
	} else
		printf("%c%c",un,mi);
}
