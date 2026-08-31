#include <stdio.h>
struct alunos {
	char nome [50];
	float faltas;
	float nota1;
	float nota2;
	float nota3;
	float media;
	float freq;
};
int main (){
	struct alunos a[17];
	int i;
	
	for(i=0; i<17; i++){
		printf ("Digite os dados do aluno %d:\n", i+1);
		
		printf ("Nome do aluno: ");
		scanf (" %[^\n]", a[i].nome);
		
		printf ("Total de faltas em hora: ");
		scanf ("%f", &a[i].faltas);
		
		printf ("Nota 1: ");
		scanf ("%f", &a[i].nota1);
		
		printf ("Nota 2: ");
		scanf ("%f", &a[i].nota2);
		
		printf ("Nota 3: ");
		scanf ("%f", &a[i].nota3); 
		
		printf ("\n");
	}
	for (i=0; i<17; i++){
		a[i].media = (a[i].nota1 + a[i].nota2 + a[i].nota3)/3;
		// 75% de 80 = 60. 
		a[i].freq = 80 - a[i].faltas;
		
		if (a[i].freq < 60){
			printf ("%s reprovado por frequencia!\n", a[i].nome);
		} else if (a[i].media>6){
			printf ("%s aprovado com %.2f de nota!\n", a[i].nome, a[i].media);
		} else {
			printf ("%s reprovado!\n", a[i].nome);
		}
	}
	return 0;
}
