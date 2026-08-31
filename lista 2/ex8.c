#include <stdio.h>
struct data{
	int dia;
	int mes;
	int ano;
};
int main(){
	char stringdata1[11];
	char stringdata2[11];
	char aux[5];
	struct data d1, d2;
	
	printf ("Digite a primeira data (dd/mm/aaaa): ");
	scanf(" %s", &stringdata1);
	
	printf ("Digite a segunda data (dd/mm/aaaa); ");
	scanf(" %s", &stringdata2);
	
	//primeira data
	
	aux[0] = stringdata1[0];
	aux[1] = stringdata1[1];
	aux[2] = '\0';
	d1.dia = atoi(aux);
	
	printf ("Dia em inteiro = %d\n", d1.dia);
	
	aux[0] = stringdata1[3];
	aux[1] = stringdata1[4];
	d1.mes = atoi(aux);
	
	printf ("Mes em inteiro = %d\n", d1.mes);
	
	aux[0]= stringdata1[6];
	aux[1] = stringdata1[7];
	aux[2] = stringdata1[8];
	aux[3] = stringdata1[9];
	d1.ano = atoi(aux);
	
	printf ("Ano em inteiro = %d\n", d1.ano);
	
	//segunda data
		
	aux[0] = stringdata2[0];
	aux[1] = stringdata2[1];
	aux[2] = '\0';
	d2.dia = atoi(aux);
	
	printf ("Dia em inteiro = %d\n", d2.dia);
	
	aux[0] = stringdata2[3];
	aux[1] = stringdata2[4];
	d2.mes = atoi(aux);
	
	printf ("Mes em inteiro = %d\n", d2.mes);
	
	aux[0]= stringdata2[6];
	aux[1] = stringdata2[7];
	aux[2] = stringdata2[8];
	aux[3] = stringdata2[9];
	d2.ano = atoi(aux);
	
	printf ("Ano em inteiro = %d\n", d2.ano);
	
	//conversão 
	if (d1.ano>d2.ano){
		printf("Data 1 ocorre primeiro");
	}else if(d1.ano<d2.ano){
		printf("Data 2 ocorre primeiro");
	}else {
		if(d1.mes>d2.mes){
			printf("Data 1 ocorre primeiro");
		}else if(d1.mes<d2.mes){
			printf("Data 2 ocorre primeiro");
		}else {
			if(d1.dia>d2.dia){
				printf("Data 1 ocorre primeiro");
			}else if(d1.dia<d2.dia){
				printf("Data 2 ocorre primeiro");
			}else {
				printf ("As datas sao iguais");
			}
		}
	}
	return 0;
}
