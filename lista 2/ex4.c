#include <stdio.h>
struct produtos {
	char nome [50];
	float compra;
	float venda;
};
int main (){
	struct produtos p[50];
	int i, indice;
	float menorpreco = 9999999;
	
	for(i=0;i<50;i++){
		printf ("Digite o nome do produto:");
		scanf(" %[^\n]", p[i].nome);
		printf ("Digite o valor de compra do produto:");
		scanf ("%f", &p[i].compra);
		printf ("Digite o valor de venda do produto: ");
		scanf ("%f", &p[i].venda);
	}
	for(i=0;i<50;i++){
		if (p[i].compra<menorpreco){
			menorpreco = p[i].compra;
			indice = i;
		}
	}
	printf ("O produto com menor preco de compra eh %s de R$%.2f de indice %d", p[i].nome, menorpreco, indice + 1);
	return 0;
}
