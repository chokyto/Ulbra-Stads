#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int ativador=1,cod=1,tip,cod2,nm=0;
		float cash1,cash2,cash3,rend1,rend2,rend3,bank1,bank2,bank3,totali,totalr,ns =0 ;
		
		while(cod>0){
	
		printf("\n MENU: \n Novo S�lario(1) \n F�rias(2) \n D�cimo terceiro(3) \n Sair(4) ");
			scanf("%i",&tip);
		if(tip==1){
			printf(" Informe o S�lario investido: ");
				scanf("%f",&cash1);
				if(cash1<210.00){
					rend1=cash1*(15.00/100);
					ns=rend1+cash1;
					printf(" Novo sal�rio:" "%2.f" "R$" "\n",ns);
				}
				if(cash1>=210.00 && cash1<=600.00){
					rend1=cash1*(10.00/100);
					ns=rend1+cash1;
					printf(" Novo sal�rio:" "%2.f" "R$" "\n",ns);
				}
				if(cash1>600.00){
					rend1=cash1*(10.00/100);
					ns=rend1+cash1;
					printf(" Novo sal�rio:" "%2.f" "R$" "\n",ns);
				}
		}
		if(tip==2){
			printf(" Informe o Sal�rio: ");
				scanf("%f",&cash2);
			rend2=cash2/3;
				printf(" Valor de suas f�rias: ""%2.f" "R$" "\n",rend2);
		}
		if(tip==3){
			printf(" Informe o Sal�rio: ");
				scanf("%f",&cash3);
			printf(" Informe os meses de trabalho na empresa (m�ximo 12): ");
				scanf("%i",&nm);
				
				rend3=cash3*nm;
				printf("\n Valor do decimo terceiro: " "%2.f" "R$" "\n",rend3);
		}
		if(tip==4){
			printf(" \nPrograma Finalizado \n ");
			cod=0;
		}
	}
}
