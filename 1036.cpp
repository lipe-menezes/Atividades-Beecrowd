#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, delta, x1, x2;
	printf("Valor de A: ");
	scanf("%lf", &a);
	printf("Valor de B: ");
	scanf("%lf", &b);
	printf("Valor de C: ");
	scanf("%lf", &c);
	delta = (b*b) - 4*a*c;
	printf("%lf\n", delta);
	
	if (delta <= 0)
		printf("Impossivel calcular");
		else {
		x1 = (-b + sqrt(delta)) / (2*a);
		x2 = (-b - sqrt(delta)) / (2*a);
		printf("X1 = %lf\n", x1);
		printf("X2 = %lf", x2);
		}
}
