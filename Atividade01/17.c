#include <stdio.h>
#include <stdlib.h>

void AUM(float a){
  float result;
  float novosal;
  result = a + 50 ;
  novosal = result - (a * 0.1);
  printf("o novo salario é %3.2f", novosal);
  break;
}

int main(){
  float salario;

  printf("Insira seu salario \n");
  scanf("%f",&salario);
  

  AUM(salario);
    
  return 0;

}
