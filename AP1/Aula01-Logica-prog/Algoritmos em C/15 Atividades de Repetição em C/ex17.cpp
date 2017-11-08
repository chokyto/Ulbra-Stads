#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		float ncanal,npessoas,bank1,bank2,bank3,bank4,porcent1,porcent2,porcent3,porcent4 =0;
		
		do{
			printf("\n Informe o número do canal:(4) (5) (7) (12),Sair(0)");
				scanf("%f",&ncanal);
			if(ncanal==4){
				printf("\n Informe o número de pessoas: ");
				scanf("%f",&npessoas);
				bank1=bank1+npessoas;
				porcent1=bank1/100;
			}
			if(ncanal==5){
				printf("\n Informe o número de pessoas: ");
				scanf("%f",&npessoas);
				bank2=bank2+npessoas;
				porcent2=bank1/100;
			}
			if(ncanal==7){
				printf("\n Informe o número de pessoas: ");
				scanf("%f",&npessoas);
				bank3=bank3+npessoas;
				porcent3=bank1/100;
			}
			if(ncanal==12){
				printf("\n Informe o número de pessoas: ");
				scanf("%f",&npessoas);
				bank4=bank4+npessoas;
				porcent4=bank1/100;
			}
			
		}while(ncanal>0);
		printf("\n Canal 4:");
		printf(" Número de pessoas assistindo: " "%2.f",bank1);
		printf(" Porcentagem de audiência do canal: " "%f" "\n",porcent1);
		
		printf("\n Canal 5:");
		printf(" Número de pessoas assistindo: " "%2.f",bank2);
		printf(" Porcentagem de audiência do canal: " "%f" "\n",porcent2);
		
		printf("\n Canal 7:");
		printf(" Número de pessoas assistindo: " "%2.f",bank3);
		printf(" Porcentagem de audiência do canal: " "%f" "\n",porcent3);
		
		printf("\n Canal 12:");
		printf(" Número de pessoas assistindo: " "%2.f",bank4);
		printf(" Porcentagem de audiência do canal: " "%f" "\n",porcent4);
}
