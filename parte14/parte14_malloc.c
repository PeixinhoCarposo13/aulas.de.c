// Malloc

/*
Quando você usa malloc, você está pedindo ao sistema:
“Me dá um espaço na memória RAM para guardar dados”

Ele:
Reserva um bloco de memória
Retorna o endereço (ponteiro) desse bloco
Quando você aloca memória com malloc, o conteúdo desse
espaço é indeterminado (pode conter "lixo" ou valores aleatórios).

Segue esse formato:
ponteiro = (tipo*) malloc(tamanho_em_bytes);

No caso de um array de inteiros:
ponteiro = (tipo*) malloc(tamanho * tamanho_em_bytes); // aloca espaço para a quantidade de elementos

Não se esqueça de liberar a memória alocada com free(ponteiro) quando não for mais necessária para evitar vazamentos de memória.

Quando iniciamos o malloc sem atribuir valores, ele vem com “lixo” (valores aleatórios).
Já o calloc, quando alocamos um array de inteiros, ele já inicializa todos os elementos com zero.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ponteiro_numero; // ponteiro para alocação dinâmica de um número

  int quantidade = 5;  // quantidade de elementos do array
  int *ponteiro_array; // ponteiro para alocação dinâmica de um array de inteiros

  // Alocação dinâmica de memória de um array de 5 inteiros
  ponteiro_array = (int *)malloc(quantidade * sizeof(int)); // aloca memória para 5 inteiros

  // Alocação dinâmica de memória para um número.
  ponteiro_numero = (int *)malloc(sizeof(int)); // aloca memória para um inteiro

  //===========================INTERAGINDO COM O ARRAY=====================================================
  // Verificar se a alocação foi bem-sucedida
  if (ponteiro_array)
  {
    /*for (int i = 0; i < quantidade; i++)
    {
      printf("Digite um numero: ");
      scanf("%d", &ponteiro_array[i]); // armazena no array alocado
    }*/

    for (int i = 0; i < quantidade; i++)
    {
      printf("Na posição 'ponteiro_array[%d]' esta o valor: %d\n", i, ponteiro_array[i]); // exibe os números
    }

    printf("O array alocado dinamicamente tem o endereço: %p\n", (void *)ponteiro_array);        // exibe o endereço do array alocado
    printf("O tamanho do array alocado dinamicamente é: %ld bytes\n", quantidade * sizeof(int)); // exibe o tamanho do array alocado

    //===========================INTERAGINDO COM O NÚMERO=====================================================
    printf("Digite um numero para armazenar em 'ponteiro_numero': ");
    scanf("%d", ponteiro_numero); // armazena o número no espaço alocado

    printf("O numero armazenado em 'ponteiro_numero' é: %d\n", *ponteiro_numero);             // exibe o número armazenado
    printf("O endereço de 'ponteiro_numero' é: %p\n", (void *)ponteiro_numero);               // exibe o endereço do número alocado
    printf("O tamanho do espaço alocado para 'ponteiro_numero' é: %ld bytes\n", sizeof(int)); // exibe o tamanho do espaço alocado
  }
  else
  {
    printf("Erro ao alocar memória\n");
    return 1; // Encerra o programa com código de erro
  }

  // Liberar a memória alocada
  free(ponteiro_array);  // libera a memória alocada para o array
  ponteiro_array = NULL; // medida de segurança para evitar ponteiro pendente

  free(ponteiro_numero);  // libera a memória alocada para o número
  ponteiro_numero = NULL; // medida de segurança para evitar ponteiro pendente

  return 0;
}