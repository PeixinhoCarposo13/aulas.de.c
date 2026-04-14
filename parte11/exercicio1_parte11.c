/*
Crie um programa que tenha uma função recursiva que
receba um numero N e calcule a soma de todos os numeros
de um até N.
*/

#include <stdio.h>

int soma(int n);

int main()
{
  int num;

  printf("Informe um número para calcular a soma de todos os números de 1 até N: ");
  scanf("%d", &num);

  printf("A soma de todos os números de 1 até %d é: %d", num, soma(num)); // chamada da função recursiva para calcular a soma de todos os números de 1 até N

  return 0;
}

// função recursiva para calcular a soma de todos os números de 1 até N
int soma(int n)
{
  if (n == 1) // caso base
    return 1;
  else
    return n + soma(n - 1); // chamada recursiva
}