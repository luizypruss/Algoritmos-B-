#include <stdio.h>
struct cliente {
	char nome[50];
	char cidade[30];
	char mes[20];
	float totalcompra;
};
int main (){
	struct cliente c [50];
	int i;
	
	for(i=0; i<50; i++){
		printf ("Nome do cliente: ");
		scanf (" %[^\n]", c[i].nome);
		
		printf ("Cidade Natal: ");
		scanf (" %[^\n]", c[i].cidade);
		
		printf ("Mes da compra: ");
		scanf (" %[^\n]", c[i].mes);
		
		printf ("Total da compra: ");
		scanf ("%f", &c[i].totalcompra);
		
		printf ("\n");
	}
	
	printf ("\nDADOS DOS CLIENTES DA LOJA VENDE TUDO\n");
	for(i=0;i<50; i++){
		printf ("Cliente %d: \n", i+1);
		printf ("Nome: %s\n", c[i].nome);
		printf ("Cidade Natal: %s\n", c[i].cidade);
		printf ("Mes: %s\n", c[i].mes);
		printf ("Total Comprado: %.2f\n\n", c[i].totalcompra);
	}
	
	return 0;
}
