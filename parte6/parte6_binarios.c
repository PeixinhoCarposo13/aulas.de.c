// Numeros Binários
// Deslocamento de números binários

#include <stdio.h>

int main()
{
  int valor = 2;
  printf("%d\n", valor);

  valor = 2;
  // deslocando para a direita
  valor = valor >> 1;
  printf("%d\n", valor);

  valor = 2;
  // deslocando para esquerda
  valor = valor << 1;
  printf("%d\n", valor);

  valor = 2;
  // negando o valor
  valor = ~valor;
  printf("%d\n", valor);

  return 0;
}