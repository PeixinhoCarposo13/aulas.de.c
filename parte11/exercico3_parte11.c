/*
Crie um programa que receba um numero N e converta esse numero para binário utilizando uma função recursiva.
*/

#include <stdio.h>

void decimal_para_binario(int n);

int main()
{
  int num;

  printf("Informe um número para converter para binário: ");
  scanf("%d", &num);

  printf("O número %d em binário é: ", num);
  decimal_para_binario(num); // chamada da função recursiva para converter o número decimal para binário

  return 0;
}

// função recursiva para converter um número decimal para binário
void decimal_para_binario(int n)
{
  if (n == 0) // caso base
    return;
  else
  {
    decimal_para_binario(n / 2); // chamada recursiva para dividir o número por 2
    printf("%d", n % 2);         // printa o resto da divisão por 2, que é o dígito binário correspondente
  }
}