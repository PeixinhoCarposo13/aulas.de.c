// Calloc

/*
A função calloc (da biblioteca stdlib.h) também serve
para alocar memória dinamicamente, mas com uma diferença MUITO importante:
-ela já inicializa tudo com zero

Quando você usa calloc:
-Ele reserva um bloco de memória (igual ao malloc)
-Divide em vários elementos
-Inicializa todos com 0

A sintaxe é a seguinte:
ponteiro = (tipo*) calloc(quantidade, tamanho_em_bytes);

No caso de um array de inteiros:
ponteiro = (tipo*) calloc(quantidade, tamanho_em_bytes); // aloca espaço para a quantidade de elementos e inicializa com zero

Nao se esqueça de liberar a memória alocada com free(ponteiro) quando não for mais necessária para evitar vazamentos de memória.

Quando iniciamos o malloc sem atribuir valores, ele vem com “lixo” (valores aleatórios).
Já o calloc, quando alocamos um array de inteiros, ele já inicializa todos os elementos com zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int quantidade = 5;  // quantidade de elementos do array
  int *ponteiro_array; // ponteiro para alocação dinâmica de um array de inteiros

  // Alocação dinâmica de memória de um array de 5 inteiros usando calloc
  ponteiro_array = (int *)calloc(quantidade, sizeof(int)); // aloca memória para 5 inteiros e inicializa com zero

  // Verificar se a alocação foi bem-sucedida
  if (ponteiro_array)
  {
    printf("O array antes de receber os valores tem os seguintes elementos com calloc:\n");
    for (int i = 0; i < quantidade; i++)
    {
      printf("Na posição 'ponteiro_array[%d]' esta o valor: %d\n", i, ponteiro_array[i]); // exibe os números (todos serão zero)
    }

    printf("O array alocado dinamicamente tem o endereço: %p\n", (void *)ponteiro_array);        // exibe o endereço do array alocado
    printf("O tamanho do array alocado dinamicamente é: %ld bytes\n", quantidade * sizeof(int)); // exibe o tamanho do array alocado
  }
  else
  {
    printf("Falha na alocação de memória.\n");
  }

  free(ponteiro_array);  // libera a memória alocada
  ponteiro_array = NULL; // medida de segurança para evitar ponteiro pendente

  return 0;
}