#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int n1,n2,n3;
		
		do{
			printf("\n Informe os números: \n ");
			scanf("%i%i%i",&n1,&n2,&n3);
			
				if(n1<=0 or n2<=0 or n3<=0){
					printf(" \n Números iguais ou menores que zero, são inválidos, Programa finalizado.");
						n1=0;
						n2=0;
						n3=0;
				}
				if(n3>n2 && n3>n1 && n3>0){
					printf(" \n O Maior número é: " "%i",n3);
				}
				if(n2>n3 && n2>n1 && n2>0){
					printf(" \n O Maior número é: " "%i",n2);
				}
				if(n1>n3 && n1>n2 && n1>0){
					printf(" \n O Maior número é: " "%i",n1);
				}
				//Menor
				if(n3<n2 && n3<n1){
					printf(" \n O Menor número é: " "%i",n3);
				}
				if(n2<n3 && n2<n1){
					printf(" \n O Menor número é: " "%i",n2);
				}
				if(n1<n3 && n1<n2){
					printf(" \n O Menor número é: " "%i",n1);
				}
				
		}while(n1>0 && n2>0 && n3>0);
}
