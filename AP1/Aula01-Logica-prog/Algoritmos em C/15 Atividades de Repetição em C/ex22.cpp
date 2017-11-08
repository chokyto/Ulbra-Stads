#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int idade,i=0;
		float altura,soma,med;
		
		do{
		printf("\n Informe a Idade: ");
			scanf("%i",&idade);
		printf("\n Informe a Altura: ");
			scanf("%f",&altura);
						
		if(idade>50){
			i++;
			soma=soma+altura;
			med=soma/i;		
		}
	}while(idade>0);
		printf("\n Media de alturas: " "%f",med);
}
