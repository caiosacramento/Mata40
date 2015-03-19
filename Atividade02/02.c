#include <stdio.h>
#include <stdlib.h>

CAULCMEDI(float a , float b, float c){
	float mediaf,qpp;
	mediaf= (a+b+c)/3;
	qpp= 6 - mediaf;

	if(mediaf >= 6){
		printf("Aprovado");
	}
	if (mediaf >= 3 && mediaf < 6){
		print("falta tirar %.f no exame ");
	}
	if (mediaf < 3 ){
		printf("reprovado");
	}
}
main(){
	float not1,not2,not3;
	scanf("%f %f %f",&not1,&not2,&not3);
	CAULCMEDI(not1,not2,not3);
}