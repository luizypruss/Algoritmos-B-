#include <stdio.h>
struct funcionario {
	char nome [30];
	char cargo[50];
	float salario;
	int idade;
};
int main (){
	struct funcionario f;
	
	printf ("Digite o nome do funcionario:");
	scanf (" %[^\n]", f.nome);
	
	printf ("\nDigite o cargo do funcionario:");
	scanf (" %[^\n]", f.cargo);
	
	printf ("\nDigite o salario do funcionario:");
	scanf ("%f", &f.salario);
	
	printf ("\nDigite a idade do funcionario: ");
	scanf ("%d", &f.idade);
	
	printf ("\nDADOS DO FUNCIONARIO\n");
	printf ("Nome: %s\n", f.nome);
	printf ("Cargo: %s\n", f.cargo);
	printf ("Salario: %.2f\n", f.salario);
	printf ("Idade: %d\n", f.idade);
	
	return 0; 
	
	}
