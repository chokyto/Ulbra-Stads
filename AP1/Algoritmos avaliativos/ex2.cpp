#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
			int cgu=1;
			float g1,g2,media,i,mt,b1,b2,bank; 
		do{
			
				printf("\n Informe o CGU: ");
					scanf("%i",&cgu);
				if(cgu!=0){
					
				
					
				printf("\n Informe suas notas: ");
					scanf("%f",&g1);
				printf("\n Informe a segunda nota: ");
					scanf("%f",&g2);
				media=(g1+(g2*2))/3;
			
				media=(g1+(g2*2))/3;
				bank=bank+media;
				if(cgu>0){
					i++;
					mt=bank/i;
				}
				if(media>=7){
					printf("\n Aprovado");
			
				}
				else{
					printf("\n Substituição");
				}
		
		}
		}while(cgu!=0);
		printf("\n Quantidade de alunos lidos: " "%2.f",i);
		printf("\n Média das notas da turma: " "%2.f",mt);
}
