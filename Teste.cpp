#include<stdio.h>

char nome [30];
int idade;

int main(){
	printf("Escreva o seu nome: ");
	scanf("%s", &nome);
	
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18){
		printf("Maior de idade");
	} else  if (idade < 18){
		printf("Menor de Idade");
	}
	
	return 0;
}
