#include <stdio.h>
struct hora{
	int h;
	int min;
	int seg;
};
int main (){
	char stringhora[9];
	char aux[3];
	struct hora horario; //horario = variavel. struct hora = tipo do dado.
	
	printf ("Digite um horario hh:mm:ss\n");
	scanf ("%s", stringhora);
	
	aux[0] = stringhora[0];
	aux [1] = stringhora[1];
	aux [2] = '\0';
	
	horario.h = atoi(aux);
	printf ("Hora em inteiro = %d\n", horario.h);
	
	aux[0] = stringhora[3];
	aux[1] = stringhora[4];
	
	horario.min = atoi(aux);
	printf ("Hora em minuto = %d\n", horario.min);
	
	aux[0] = stringhora[6];
	aux[1] = stringhora[7];
	
	horario.seg = atoi(aux);
	printf ("Hora em segundos = %d\n", horario.seg);
	
	printf ("%dhora(s) e %dminutos(s) e %dsegundo(s)", horario.h, horario.min, horario.seg);
	return 0;
}
