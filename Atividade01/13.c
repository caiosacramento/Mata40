#include <stdio.h>
#include <stdlib.h>

void MEDIAP(float a, float b, float c, int p1 , int p2, int p3){
   float result;     
   soma=(a*p1)+(b*p2)+(c*p3)/3;
   printf("A media ponderada e: %3.2f",soma);
}

int main(){
    float not1, not2, not3;
	int p1, p2, p3;

   	printf("Insira a primeira nota e seu peso \n");
	scanf("%f %d",&not1,&p1);
	printf("Insira a segunda nota e seu peso \n");
	scanf("%f %d",&not2,&p2);
	printf("Insira a terceira nota e seu peso \n");
	scanf("%f %d",&not3,&p3);

   	MEDIAP(not1, not2, not3,p1, p2, p3);
    
	return 0;

}

