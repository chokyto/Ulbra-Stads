#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		float idade, op,bank1,bank2,bank3,id,id2,id3,ip,meid,meid2,meid3,cont,soma,porcent =0 ;
		
		do{
			printf("\n Informe a idade: ");
				scanf("%f",&idade);
			printf("\n Opinião: Ótimo-3, Bom-2, Regular-1");
				scanf("%f",&op);
			if(idade>0 && op==3){
				id++;
				bank1=bank1+idade;
				meid=bank1/id;
			}
			if(idade>0 && op==2){
			id2++;
			bank2=bank2+idade;
			meid2=bank2/id2;
			}
			if(idade>0 && op==1){
			id3++;
			bank3=bank3+idade;
			meid3=bank3/id3;
			}
			soma=id+id2+id3;
			porcent=(id2*soma)/100;
			cont++;
		}while(cont<=15);
		printf("\n Média da idade das pessoas que responderam, Ótimo: " "%2.f" "\n",meid);
		printf("\n Quantidade de pessoas que responderam, Regular: " "%2.f",id3);
		printf("\n Porcentagem de pessoas que responderam, Bom: " "%f",porcent);
}
