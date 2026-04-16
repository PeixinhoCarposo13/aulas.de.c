// Realloc

/*
A função realloc (da stdlib.h) serve para:
redimensionar um bloco de memória já alocado
Ou seja:

-Aumentar o tamanho
Diminuir o tamanho

Quando você usa realloc, ele pode:
Aumentar o espaço existente (se possível)
Mover os dados para outro lugar na memória
Manter os dados antigos (até o limite anterior)

Sua sintaxe é a seguinte:
ponteiro = (tipo*) realloc(ponteiro, novo_tamanho_em_bytes);
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int quantidade = 5;  // quantidade de elementos do array
  int *ponteiro_array; // ponteiro para alocação dinâmica de um array de inteiros

  // Alocação dinâmica de memória de um array de 5 inteiros usando malloc
  ponteiro_array = (int *)malloc(quantidade * sizeof(int)); // aloca memória para 5 inteiros

  // Verificar se a alocação foi bem-sucedida
  if (ponteiro_array)
  {
    printf("O array alocado dinamicamente tem o endereço: %p\n", (void *)ponteiro_array);        // exibe o endereço do array alocado
    printf("O tamanho do array alocado dinamicamente é: %ld bytes\n", quantidade * sizeof(int)); // exibe o tamanho do array alocado

    // Redimensionar o array para conter 10 inteiros usando realloc
    int nova_quantidade = 10;                                                       // nova quantidade de elementos
    ponteiro_array = (int *)realloc(ponteiro_array, nova_quantidade * sizeof(int)); // redimensiona o array para 10 inteiros

    if (ponteiro_array)
    {
      printf("O array redimensionado tem o endereço: %p\n", (void *)ponteiro_array);             // exibe o endereço do array redimensionado
      printf("O tamanho do array redimensionado é: %ld bytes\n", nova_quantidade * sizeof(int)); // exibe o tamanho do array redimensionado
    }
    else
    {
      printf("Falha ao redimensionar a memória.\n");
      free(ponteiro_array); // libera a memória original em caso de falha no realloc
      return 1;
    }
  }
  else
  {
    printf("Falha na alocação de memória.\n");
    return 1;
  }

  free(ponteiro_array);  // libera a memória alocada
  ponteiro_array = NULL; // medida de segurança para evitar ponteiro pendente

  return 0;
}