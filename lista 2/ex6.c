#include <stdio.h>
#include <math.h>
struct ponto{
	float x;
	float y;
};
int main(){
	struct ponto p1, p2;
	float dist;
	
	printf ("Digite as coordenadas do ponto X1 e X2: ");
	scanf (" %f %f", &p1.x, &p2.x);
	
	printf("Digite as coordenadas do ponto Y1 e Y2: ");
	scanf(" %f %f", &p1.y, &p2.y);
	
	dist = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	
	printf ("A distancia entre os pontos sera %f", dist);
	
	return 0;
}
