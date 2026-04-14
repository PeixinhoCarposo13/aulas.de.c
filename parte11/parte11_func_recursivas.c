// Funções recursivas

/*As funções recursivas são aquelas que se chamam a
si mesmas para resolver um problema. Elas geralmente
possuem um caso base que interrompe a recursão e um
caso recursivo que continua a chamar a função até
atingir o caso base.
*/

#include <stdio.h>

int fatorial(int n);
int fibonacci(int n);

int main()
{
  int num;

  printf("Informe um número para calcular o fatorial: ");
  scanf("%d", &num);

  printf("O fatorial de %d é: %d", num, fatorial(num)); // chamada da função recursiva para calcular o fatorial

  printf("\nInforme o tamanho da sequência de Fibonacci: ");
  scanf("%d", &num);

  printf("O %d-ésimo número da sequência de Fibonacci é: %d", num, fibonacci(num)); // chamada da função recursiva para calcular o número n da sequência de Fibonacci

  // Printando a sequencia de Fibonacci até o número n informado pelo usuário
  printf("\nA sequência de Fibonacci até o número %d é: ", num);
  for (int i = 0; i <= num; i++)
  {
    printf("%d ", fibonacci(i)); // chamada da função recursiva para calcular o número n da sequência de Fibonacci
  }

  return 0;
}

// função recursiva para calcular o número n da sequência de Fibonacci
int fibonacci(int n)
{
  if (n == 0) // caso base
    return 0;
  else if (n == 1) // caso base
    return 1;
  else
    return fibonacci(n - 1) + fibonacci(n - 2); // chamada recursiva
}

// função recursiva para calcular o fatorial de um número
int fatorial(int n)
{
  if (n == 0 || n == 1) // caso base
    return 1;
  else
    return n * fatorial(n - 1); // chamada recursiva
}