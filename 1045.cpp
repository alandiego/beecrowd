#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void troca(double *a, double *b){
	double temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	double a, b, c;

	scanf("%lf%lf%lf", &a, &b, &c);
	
	if (a < b){
		troca(&a, &b);
	}
	if (a < c){
		troca(&a, &b);
	}
	
	
	if (a >= b+c || b >= a+c || c >= a+b) {
		printf("NAO FORMA TRIANGULO\n");
		return 0;
	}
	
	if (a >= b+c){
		printf("NAO FORMA TRIANGULO\n");
	}
	if (a*a == (b*b) + (c*c)){
		printf("TRIANGULO RETANGULO\n");
	}
	if (a*a > (b*b) + (c*c)){
		printf("TRIANGULO OBTUSANGULO\n");
	} 
	if (a*a < (b*b) + (c*c)){
		printf("TRIANGULO ACUTANGULO\n");
	} 
	if (a == b && b == c){
		printf("TRIANGULO EQUILATERO\n");
	}
	if ((a == b && b != c) || (a != b && b == c) || (a == c && b != c)){
		printf("TRIANGULO ISOSCELES\n");
	}
	


	return 0;
}
