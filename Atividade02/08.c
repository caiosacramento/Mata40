#include <stdio.h>
#include <math.h>


void SOMA(int a,int b ){
	int resultado ;
	resultado = a + b;
	printf("O resultado da soma e: %d \n", resultado);
}

void SUBTRAIR(int a,int b ){
	int resultado ;
	resultado = a - b;
	printf("O resultado da soma e: %d \n", resultado);
}

void MULTIPLICAR(int a,int b ){
	int resultado ;
	resultado = a * b;
	printf("O resultado da soma e: %d \n", resultado);
}

void DIVIDIR(int a,int b ){
	int resultado ;
	resultado = a / b;
	printf("O resultado da soma e: %d \n", resultado);
}

void RAIZ(float a){
	float resultado ;
	resultado = sqrt(a);
	printf("O resultado da divisao e: %f \n", resultado);
}

int main() {
	int tipo, num1, num2, resultado;
	float raiz;
	printf("1. Somar dois números.\n");
	printf("2. Subtrair dois números\n");
	printf("3. Multiplicar dois números\n");
	printf("4. Dividir dois números\n");
	printf("5. Raiz quadrada de um número\n");
	printf("Digite a opção desejada.\n");
	scanf("%d",&tipo);
	
	switch(tipo){
		case 1:
			printf("Insira os dois numeros para somar\n");
			scanf("%d %d", &num1, &num2);
			SOMA(num1,num2);
	
		case 2:
			printf("Insira os dois numeros para subtrair\n");
			scanf("%d %d", &num1, &num2);
			SUBTRAIR(num1,num2);
	
		case 3:
			printf("Insira os dois numeros para multiplicar\n");
			scanf("%d %d", &num1, &num2);
			MULTIPLICAR(num1,num2);
	
		case 4:
			printf("Insira os dois numeros para divisao\n");
			scanf("%d %d", &num1, &num2);
			DIVIDIR(num1,num2);
		
		case 5
			printf("Insira um numero para achar a raiz \n");
			scanf("%f", &num1);
			RAIZ(num1);
	}
	return (0);
}