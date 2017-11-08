#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		float np,at=1,s,n,sm,sh,resp,sexo,soma,porcent =0;
		
		do{
			printf("Resposta sobre o produto: 1 para S ou 2 para N ?");
				scanf("%f",&resp);
			printf("\n Sexo   1 para(M), 2 para(F): ");
				scanf("%f",&sexo);
			if(resp==1 && sexo==2){
			sm++;
			}
			if(resp==2 && sexo==1){
			sh++;
			}
			if(resp==1){
			s++;
			}
			if(resp==2){
			n++;
			}
			soma=s+n;
			porcent=(sh*soma)/100;
			
			
			printf("\n \n Para continuar digite (1), Para finalizar digite (0)");
				scanf("%f",&at);
		}while(at>0);
		printf("\n Número de pessoas que responderam, Sim " "%2.f" ,s);
			printf("\n Número de pessoas que responderam, Não " "%2.f" ,n);
			printf("\n Número de mulheres que responderam, Sim " "%2.f" ,sm);
			printf("\n Porcentagem de homens que responderam, Não " "%f" ,porcent);

}
