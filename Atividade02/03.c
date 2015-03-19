#include <stdio.h>
#include <stdlib.h>

MAIORQ(int a , int b){
	if(a > b){
		printf("o numero maior é %d\n", a);
	}else{
		printf("o numero maior é %d\n", b);
	}
}
main(){
	int num1, num2;
	scanf("%d %d",&num1,&num2);

	MAIORQ(num1,num2);
}