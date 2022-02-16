#include<stdio.h>
#include<math.h>
#define PI 3.14159 
int main (){
	double area,raio;
	printf("Qual valor de raio:");
	scanf("%lf",&raio);
	area = pow(raio,2) * PI;
	printf("Area:%.4lf",area);
	
	
}
