#include <stdio.h>
#include <stdlib.h>
void MAIORQ(int a, int b, int c){
	if (a>b && a>c && b>c) {
		printf("%d %d %d",c,b,a);
	}
	if (a>b && a>c && c>b) {
		printf("%d %d %d",b,c,a);
	}
	if (b>a && b>c && a>c) { 
		printf("%d %d %d",c,a,b);
	}
	if (b>a && b>c && c>a) {
		printf("%d %d %d",a,c,b);
	}
	if (c>a && c>b && b>a) {
		printf("%d %d %d",a,b,c);
	}
	if (c>a && c>b && a>b) {
		printf("%d %d %d",b,a,c);
	}
}
int main(){
	int num1,num2,num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	MAIORQ(num1,num2,num3);
}