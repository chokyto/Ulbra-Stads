#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int n1,n2,n3;
		
		do{
			printf("\n Informe os n�meros: \n ");
			scanf("%i%i%i",&n1,&n2,&n3);
			
				if(n1<=0 or n2<=0 or n3<=0){
					printf(" \n N�meros iguais ou menores que zero, s�o inv�lidos, Programa finalizado.");
						n1=0;
						n2=0;
						n3=0;
				}
				if(n3>n2 && n3>n1 && n3>0){
					printf(" \n O Maior n�mero �: " "%i",n3);
				}
				if(n2>n3 && n2>n1 && n2>0){
					printf(" \n O Maior n�mero �: " "%i",n2);
				}
				if(n1>n3 && n1>n2 && n1>0){
					printf(" \n O Maior n�mero �: " "%i",n1);
				}
				//Menor
				if(n3<n2 && n3<n1){
					printf(" \n O Menor n�mero �: " "%i",n3);
				}
				if(n2<n3 && n2<n1){
					printf(" \n O Menor n�mero �: " "%i",n2);
				}
				if(n1<n3 && n1<n2){
					printf(" \n O Menor n�mero �: " "%i",n1);
				}
				
		}while(n1>0 && n2>0 && n3>0);
}
