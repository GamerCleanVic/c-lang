#include <stdio.h>

int main(){
  int idade = 0;
  float altura = 0.0f;
  char inicial = '\0';
  char nome[50];

  printf("\nDigite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  printf("Digite uma inicial: ");
  scanf(" %c", &inicial);

  printf("Digite seu nome: ");
  scanf("%49s", nome);

  printf("\nIdade: %d\n", idade);
  printf("Altura: %.2f\n", altura);
  printf("Inicial: %c\n", inicial);
  printf("Nome: %s\n\n", nome);

  return 0;
}
