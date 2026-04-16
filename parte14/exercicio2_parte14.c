/*
Faça um programa aloque inicialmente um vetor com 3 inteiros,
pergunte ao usuário quantos valores ele quer informar,
use REALLOC caso seja mais que 3 valores, leia e apresente os valores.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int quantidade_inicial = 3; // quantidade inicial de elementos do array
  int *ponteiro_array;        // ponteiro para alocação dinâmica de um array de inteiros

  // Alocação dinâmica de memória de um array de 3 inteiros usando malloc
  ponteiro_array = (int *)malloc(quantidade_inicial * sizeof(int)); // aloca memória para 3 inteiros

  // Verificar se a alocação foi bem-sucedida
  if (ponteiro_array)
  {
    printf("Digite quantos valores deseja informar: ");
    int quantidade_desejada;
    scanf("%d", &quantidade_desejada); // lê a quantidade desejada pelo usuário

    // Verificar se a quantidade desejada é maior que a quantidade inicial
    if (quantidade_desejada > quantidade_inicial)
    {
      // Redimensionar o array para conter a quantidade desejada usando realloc
      ponteiro_array = (int *)realloc(ponteiro_array, quantidade_desejada * sizeof(int)); // redimensiona o array
    }

    // Ler os valores informados pelo usuário
    for (int i = 0; i < quantidade_desejada; i++)
    {
      printf("Digite o valor para a posição [%d]: ", i);
      scanf("%d", &ponteiro_array[i]); // armazena no array alocado
    }

    // Apresentar os valores informados
    printf("Valores informados:\n");
    for (int i = 0; i < quantidade_desejada; i++)
    {
      printf("Valor na posição [%d]: %d\n", i, ponteiro_array[i]); // exibe os números
    }
  }
  else
  {
    printf("Erro ao alocar memória\n");
    return 1; // Encerra o programa com código de erro
  }

  free(ponteiro_array);  // libera a memória alocada
  ponteiro_array = NULL; // medida de segurança para evitar ponteiro pendente

  return 0;
}