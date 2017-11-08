#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int ativador=1,cod,tip,cod2;
		float cash1,cash2,cash3,rend1,rend2,rend3,bank1,bank2,bank3,totali,totalr =0 ;
		
		printf("\n Informe o seu código: ");
			scanf("%i",&cod);
		while(cod>0){
	
		printf("\n Informe o Tipo do investimento: \n Poupança(1) \n Poupança Plus(2) \n Fundos de renda fixa(3) \n ");
			scanf("%i",&tip);
		if(tip==1){
			printf(" Informe o Valor investido: ");
				scanf("%f",&cash1);
					bank1=bank1+cash1;
			rend1=bank1*(1.5/100);
				printf(" Rendimento na Poupança:" "%2.f" "R$" "\n",rend1);
		}
		if(tip==2){
			printf(" Informe o Valor investido: ");
				scanf("%f",&cash2);
					bank2=bank2+cash2;
			rend2=bank2*(2.0/100);
				printf(" Rendimento na poupança Plus: ""%2.f" "R$" "\n",rend2);
		}
		if(tip==3){
			printf(" Informe o Valor investido: ");
				scanf("%f",&cash3);
					bank3=bank3+cash3;
			rend3=bank3*(4.0/100);
				printf("\n Rendimentos em Fundos de Renda Fixa: " "%2.f" "R$" "\n",rend3);
		}
		
		printf("\n Digite o Cod: (0) para finalizar ou (1) para continuar! ");
			scanf("%i",&cod);
	
	}
		totali=bank1+bank2+bank3;
		totalr=rend1+rend2+rend3;
		printf("\n Total de investimento: " "%2.f" " R$",totali);
		printf("\n Total de juros pagos: " "%2.f" " R$",totalr);

}
