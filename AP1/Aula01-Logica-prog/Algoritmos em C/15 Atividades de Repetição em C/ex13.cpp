#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		float idade, peso,bank1,bank2,bank3,bank4,id,id2,id3,id4,ip,meid,meid2,meid3,meid4,cont,soma,porcent =0 ;
		
		do{
			printf("\n Informe a idade: ");
				scanf("%f",&idade);
			printf("\n Informe seu peso: ");
				scanf("%f",&peso);
			if(idade>0 && idade<11){
			id++;
			bank1=bank1+peso;
			meid=bank1/id;
			}
			if(idade>10 && idade<21){
			id2++;
			bank2=bank2+peso;
			meid2=bank2/id2;
			}
			if(idade>20 && idade<31 ){
			id3++;
			bank3=bank3+peso;
			meid3=bank3/id3;
			}
			if(idade>30){
			id4++;
			bank4=bank4+peso;
			meid4=bank4/id4;
			}
			soma=id+id2+id3;
			porcent=(id2*soma)/100;
			cont++;
		}while(cont<=15);
		printf("\n Média de 1 a 10: " "%f",meid);
		
		printf("\n Média de 11 a 20: " "%f",meid2);
		
		printf("\n Média de 21 a 30: " "%f",meid3);
		
		printf("\n Média de 31 pra cima: " "%f",meid4);
}
