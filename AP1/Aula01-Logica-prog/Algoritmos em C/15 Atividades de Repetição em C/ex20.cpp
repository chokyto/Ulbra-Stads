#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int menu;
		float nota1,nota2,nota3,medat,medp,soma;
		
		do{
			printf("\n Menu: \n Média aritmética: (1) \n Média Ponderada:(2) \n Sair (3)");
				scanf("%i",&menu);
				if(menu==1){
					printf("\n Informe duas notas: ");
						scanf("%f%f",&nota1,&nota2);
					medat=(nota1+nota2)/2;
					printf("\n Informando Média:" "%f",medat);
				}
				if(menu==2){
					printf("\n Informe três notas: ");
						scanf("%f%f%f",&nota1,&nota2,&nota3);
						nota2=nota2*2;
						nota3=nota3*3;
						soma=nota1+nota2+nota3;
						medp=soma/6;
						printf("\n Informando Média: " "%f",medp);
				}
				if(menu==2){
					menu==3;
				}
				
			
	}while(menu!=3);
}
