#include <conio.h>
#include <stdio.h>
#include <locale.h>

main(){	setlocale(LC_ALL,	"Portuguese");
		int idade1,contsal,id1,id2,maior=0,menor=0,sexo,contf,msexo,midade;
		float sal,bank1,med,msal;
		
		do{
			printf("\n ok");
			printf("\n Informe a idade: ");
				scanf("%i",&id1);
			printf("\n Sexo 1(M)|2(F) ");
				scanf("%i",&sexo);
			printf("\n informe o salário ");
				scanf("%f",&sal);
			
			if(id1>maior){
				maior=id1;
			}
			if(id1<maior && id1>0){
				menor=id1;
			}
			if(sal>0){
				contsal++;
				bank1=bank1+sal;
				med=bank1/contsal;
			}
			if(sal<200 && sexo==2){
				contf++;
			}
			if(sal>0 && sal<msal){
				msal=sal;
				msexo=sexo;
				midade=id1;
			}
				
		}while(id1>0);
		printf("\n Média dos salário do grupo: ""%2.f",med);
		printf("\n A maior idade do grupo: " "%i",maior);
		printf("\n A menor idade do grupo: " "%i",menor);
		printf("\n Informações da pessoa que possui o menor salário: \n Idade" "%i",midade);  
		if(msexo==1){
			printf("Sexo: Masculino");
		}
		if(msexo==2){
			printf("Sexo: Feminino");
		}
	}
