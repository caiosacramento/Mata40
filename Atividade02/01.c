#include <stdio.h>
#include <stdlib.h>

CAULCMEDI(float a , float b, float c){
	float mediaf;
	mediaf=(a*2+b*3+c*5)/10;
	if (mediaf>=8 && mediaf <=10){
		Printf("a media final é : %f e a sua nota é : A");
		
	} 
	if (mediaf>=7 && mediaf <8){
		Printf("a media final é : %f e a sua nota é : B")
	} 
	if (mediaf>=6 && mediaf <7) {
		Printf("a media final é : %f e a sua nota é : C")
	} 
	if (mediaf>=5 && mediaf <6){
		Printf("a media final é : %f e a sua nota é : D")
	} 
	if (mediaf>=0 && mediaf <5) {
		Printf("a media final é : %f e a sua nota é : E")
	} 
}
main(){
	float trab,av,ex;
	scanf("%f %f %f",&trab,&av,&ex);
	CAULCMEDI(trab,av,ex);
}