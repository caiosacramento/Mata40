#include <stdio.h>
#include <stdlib.h>

void FTC(int a){
	int  tempinc;
	tempc = (a - 32) / 1.8;
	printf("%d em Farenheit equivale a %5.2f celsius \n", a,tempc);
}

int main(){
    int tempinf;

	printf("Informe a temperatura em Farenheit");
	scanf("%d",&tempinf);

	FTC(tempinf);

    
	return 0;

}