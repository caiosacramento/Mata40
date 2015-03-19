#include <stdio.h>
#include <stdlib.h>

void DOBRO(int a){
	int  area, dobro;
	area = (a * a);
	dobro = area * 2;
	printf("A area do quadrado e: %d",dobro);
}

int main(){
    int lado;

   	scanf("%d", &lado);
	DOBRO(lado);
    
	return 0;

}

