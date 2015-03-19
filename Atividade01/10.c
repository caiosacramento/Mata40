#include <stdio.h>
#include <stdlib.h>

void SALARIO(int a, int b){
	int  cash;
	cash = a * b;
	printf("o salario mensal é: %d",cash);
}

int main(){
    int ganho, horas;

	printf("ganho por hora?");
	scanf("%d",&ganho);
	printf("horas trabalhadas? ");
	scanf("%d",&horas);
	
	SALARIO(ganho,horas);

    
	return 0;

}

