#include<stdio.h>

int main (){
	int IDADE;
	printf("Digite a idade");
	scanf("%d",&IDADE);
	if (IDADE < 10)
	printf("Crianca");
	else if (IDADE < 18)
	printf("Adolescente");
	else if (IDADE < 60)
	printf("Adulto");
	else if (IDADE < 100)
	printf("Idoso");
	else if (IDADE < 101)
	printf("ZUMBI");
	else 
	printf("Idade Invalida");


}
