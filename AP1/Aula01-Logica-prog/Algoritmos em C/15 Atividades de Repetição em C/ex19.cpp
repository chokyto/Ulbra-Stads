#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int mm,md,ativador=1;
		char emp, at;
		float lc,bank1,bank2,bank3,ltotal;
	
		do{
			printf("\n Informe a letra da ação: ");
				scanf("%c",&emp);
				
				printf("Informe o lucro desta ação: ");
					scanf("%f",&lc);
				if(lc<1000.00 && lc>200.00){
				bank3=bank3+lc;
					printf("\n Nova ação adicionada : " "%c",emp);
					printf("\n Entrada de novo lucro : ""%2.f",lc);
					}
				if(lc>1000.00){
					printf("\n Nova ação adicionada : " "%c",emp);
					printf("\n Entrada de novo lucro : ""%2.f",lc);
					bank1=bank1+lc;
					mm++;
				}
				if(lc<200.00){
					printf("\n Nova ação adicionada: " "%c",emp);
					printf("\n Entrada de novo lucro: ""%2.f",lc);
					bank2=bank2+lc;
					md++;
				}
				ltotal=bank1+bank2+bank3;
				printf("\n Quantidade de ações Superior a 1000,00R$ " "%i",mm);
				printf("\n Quantidade de ações Inferior a 200,00R$ " "%i",md);
				printf("\n Lucro total da empresa: " "%f",ltotal);
			}while(ativador>0);
			
}
		

