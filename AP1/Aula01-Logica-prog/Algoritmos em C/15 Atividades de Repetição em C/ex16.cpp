#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		float idade,bank1,media,i =0;
		
		do{
			printf("\n Informe a idade: ");
				scanf("%f",&idade);
			if(idade>0);
				i++;
				bank1=bank1+idade;
				media=bank1/i;
		}while(idade>1);
		printf("\n Media das idades: " "%f",media);
}
