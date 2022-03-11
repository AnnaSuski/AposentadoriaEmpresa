#include<stdio.h>
#include<stdlib.h>
int main(){
		int numimp,nasc,ingres,idade,tempo;
	printf("Informe o seu numero(codigo) ");
	scanf("%d",&numimp);
	printf("Informe o ano de seu nascimento ");
	scanf("%d",&nasc);
	printf("Informe o seu ano de ingresso na empresa ");
	scanf("%d",&ingres);
	idade=2021-nasc;
	tempo=2021-ingres;
	if(idade>=65 && tempo>=30){
		printf(" Sua idade e %d\n Seu tempo de trabalho e %d \n Requer aposentadoria",idade,tempo);
	}else if(idade>=60 && idade<65 ||tempo>=25 && tempo<30){
		printf(" Sua idade e %d\n Seu tempo de trabalho e %d \n Requer aposentadoria",idade,tempo);
	}else{
		printf(" Sua idade e %d\n Seu tempo de trabalho e %d \n Nao requer aposentadoria",idade,tempo);
	}
	getch();
}
