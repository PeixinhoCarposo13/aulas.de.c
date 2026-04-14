/*
Crie uma função recursiva que receba um numero N e calcule seu fatorial.
*/

#include <stdio.h>

int fatorial(int n);

int main()
{
  int num;

  printf("Informe um número para calcular o fatorial: ");
  scanf("%d", &num);

  printf("O fatorial de %d é: %d", num, fatorial(num)); // chamada da função recursiva para calcular o fatorial

  return 0;
}

// função recursiva para calcular o fatorial de um número
int fatorial(int n)
{
  if (n == 0 || n == 1) // caso base
    return 1;
  else
    return n * fatorial(n - 1); // chamada recursiva
}
