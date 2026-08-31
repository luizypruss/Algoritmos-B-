#include <stdio.h>
struct ponto {
	float x;
	float y;
};

int main (){
	struct ponto p1, p2, p3;
	float minX, maxX, minY, maxY;
	
	printf ("Digite as coordenadas do ponto x1 e y1: ");
	scanf (" %f %f", &p1.x, &p1.y);
	
	printf ("Digite as coordenadas do ponto x2 e y2: ");
	scanf (" %f %f", &p2.x, &p2.y);
	
	printf ("Digite as coordenadas do ponto x3 e y3: ");
	scanf(" %f %f", &p3.x. &p3.y);
	
	if(p1.x == p2.x && p1.y == p2.y){
    	printf("Os dois primeiros pontos nao formam um retangulo\n");
	}
	
	if(p1.x < p2.x){
		minX = p1.x;
		maxX = p2.x;
	} else {
		minX = p2.x;
		maxX = p1.x;
	}
	
	if (p1.y < p2.y){
		minY = p1.y;
		maxY = p1.y;
	} else {
		minY = p2.y;
		maxX = p1.y;
	}
	
	if(p3.x >= minX && p3.x <= maxX && p3.y >= minY && p3.y <= maxY){
		printf ("Os dois primeiros pontos formam um retangulo e o terceiro ponto esta dentro dele!\n");
	} else {
		printf ("O terceiro ponto nao esta dentro do retangulo!\n");
	}
  return 0;
}
