
#include <stdio.h>

int main(){
	double a,b,m=0;
	printf("Digite a primeira nota");
	scanf("%lf", &a);
	printf("Digite a segundo nota");
	scanf("%lf", &b);
	m = ((a * 3.5)+(b*7.5))/11;
	printf("m = %.1lf", m);
	

}

