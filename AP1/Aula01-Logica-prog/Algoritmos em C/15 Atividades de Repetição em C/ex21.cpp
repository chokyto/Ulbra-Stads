#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		float pvn,pvb,pvsn,pvsb,cod,a,b,c,d,e,f,totalv =0;


		do{
			printf("\n Informe o códido de seu candidato: \n Votos para respectivos candidatos:(1),(2),(3),(4). \n Vote nulo:(5) \n Vote em branco: (6) ");
				scanf("%f",&cod);
				
				if(cod<1 or cod>6){
				printf(" \n Código Inválido");
				}

			if(cod>0 && cod<2){
				a=a+1;
			}
			if(cod>1 && cod<3){
				b=b+1;
			}
			if(cod>2 && cod<4){
				c=c+1;
			}
			if(cod>3 && cod<5){
				d=d+1;
			}
			if(cod>4 && cod<6){
				e=e+1;
			}
			if(cod>5 && cod<7){
				f=f+1;
			}
			totalv=a+b+c+d+e+f;
			pvn=e/100;
			pvb=f/100;
			pvsn=pvn*(totalv/100);
			pvsb=pvb*(totalv/100);
		}while(cod>0);
		printf("Quantidade de votos:");
         	printf("\n Candidato 1: " "%2.f",a);
			printf("\n Candidato 2:"  "%2.f",b);
			printf("\n Candidato 3: " "%2.f",c);
			printf("\n Candidato 4: " "%2.f",d);
			printf("\n Votos Nulos 5:" "%2.f",e);
			printf("\n Votos em branco: ""%2.f",f);
			printf("\n Porcentagem de votos nulos sobre o total: " "%f",pvn);
			printf("\n Porcentagem de votos branco sobre o total: " "%f",pvb);
}

