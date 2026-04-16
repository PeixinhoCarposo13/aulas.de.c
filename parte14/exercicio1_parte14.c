/*
1. Crie um programa que:
a) Aloque dinamicamente um array de 5 números inteiros;
b) Peça para o usuário informar os 5 números no espaço alocado;
c) Mostre na tela os 5 valores;
d) Libere a memória alocada;
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int quantidade = 5; // quantidade de elementos do array
  int *ponteiro_array; // ponteiro para alocação dinâmica de um array de inteiros

  // Alocação dinâmica de memória de um array de 5 inteiros
  ponteiro_array = (int *)malloc(quantidade * sizeof(int)); //aloca memória para 5 inteiros

  // Verificar se a alocação foi bem-sucedida
  if (ponteiro_array)
  {
    for (int i = 0; i < quantidade; i++)
    {
      printf("Digite um numero: ");
      scanf("%d", &ponteiro_array[i]); //armazena no array alocado
    }

    for (int i = 0; i < quantidade; i++)
    {
      printf("Na posição 'ponteiro_array[%d]' esta o valor: %d\n", i, ponteiro_array[i]); // exibe os números
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