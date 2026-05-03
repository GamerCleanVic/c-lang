#include <stdio.h>

int main(){
  int base;
  int altura;
  int area;

  printf("\nDigite o valor da base: ");
  scanf("%i", &base);

  printf("\nDigite o valor da altura: ");
  scanf("%i", &altura);
  
  area = (base * altura);
  printf("\nÁrea = %i\n\n", area);

  return 0;
}
