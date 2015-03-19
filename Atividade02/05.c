#include <stdio.h>
#include <stdlib.h>
void MAIORQ(int num1,int num2, int num3,int num4){
	if (num3>num1 && num3>num2 && num2>num1){
		if (num4<num1){
			printf("%d %d %d %d",num3,num2,num1,num4);
		}
		if (num4>num1 && num4<num2) {
			printf("%d %d %d %d",num3,num2,num4,num1);
		}
		if (num4>num2 && num4<num3) {
			printf("%d %d %d %d",num3,num4,num2,num1);
		}
		if (num4>num3) {
			printf("%d %d %d %d",num4,num3,num2,num1);
		}
	}
}
int main(){
	int num1,num2,num3,num4;
	scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
	MAIORQ(num1,num2,num3,num4);
}