#include <stdio.h>

int main(){
	double a,b,c, m=0;
	printf("Digite a primeira nota");
	scanf("%lf", &a);
	printf("Digite a segundo nota");
	scanf("%lf", &b);
	printf("Digite a terceira nota");
	scanf("%lf", &c);
	m = ((a * 2)+( b* 3 )+( c * 5 ))/10;
	printf("x = %.1lf", m);
	
	
}
