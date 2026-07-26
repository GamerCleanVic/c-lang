/*
* Variáveis e Tipos de Dados em C
*
*/

#include <stdio.h>

#define LIMITE 10 // Define uma constante


int main(void){
  int idade = 25;
  float altura = 1.75f; // f indica explicitamente que o literal é um float
  double saldo = 1250.75;
  char inicial = 'A'; // guarda apenas 1 caracter
  const char *curso = "C";// Ponteiro para uma String literal constante
  
  printf("\nIdade: %d\n", idade);
  printf("Altura: %.2f\n", altura);//o %.2f é para mostrar apenas 2 casas decimais após a vírgula
  printf("Saldo: %.2f\n", saldo);
  printf("Inicial(char): %c\n", inicial);
  printf("Curso: %s\n", curso);
  printf("Limite definido: %d\n\n", LIMITE);

  return 0;// retorna iteiro porque a função main é int e precisa retornar um int poi é tipada
}
