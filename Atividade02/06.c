#include <stdio.h>
void PAR(int a){
	
	if (a%2==0) {
		printf("par");
	}
	else{
		printf ("impar");
	}
}
int main(){
	int num;
	scanf("%d",&num);
	PAR(num);
}