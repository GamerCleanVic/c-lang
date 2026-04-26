#include <stdio.h>
#include <stdlib.h>

//declara a fn
int soma(int num1, int num2);
double tabuada(double num1);

//Exec fn
int main(){
  //printf("\nA soma = %i \n\n" , soma(3, 4));
  tabuada(2);
  printf("\n\n");

  return 0; //pois é fn tipada int
}

//Lógica da fn
int soma(int num1, int num2){
  return num1 + num2;
}
double tabuada(double num1){
  printf("\n\n");
  printf("Soma\n");
  for(int i = 1; i <= 10; i++){
    int soma = ((int)num1 + i);
    printf("%.i + %i = %.i\n",(int)num1 , i,  (int)soma);
  }
  printf("\n\n");
  printf("Subtração\n");
  for(int i = 1; i <= 10; i++){
    int subt = ((int)num1 - i);
    printf("%i - %i = %i\n",(int)num1 , i,  (int)subt);
  }
  printf("\n\n");
  printf("Multiplicação\n");
  for(int i = 1; i <= 10; i++){
    int multi = ((int)num1 * i);
    printf("%i x %i = %i\n",(int)num1 , i,  (int)multi);
  }
  printf("\n\n");
  printf("Divisão\n");
  for(int i = 1; i <= 10; i++){
    double div = (num1 / i);
    printf("%.2f / %i = %.2f\n",num1 , i,  div);
  }
  printf("\n\n");
  return 0.0;
}
