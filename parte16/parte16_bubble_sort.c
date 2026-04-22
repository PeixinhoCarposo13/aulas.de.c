// Bubble sort

/*
Ele compara elementos vizinhos:

se o da esquerda for maior → troca
se não → mantém

O maior valor vai “borbulhando” para o final do vetor.

Por isso o nome Bubble (bolha subindo).
*/

#include <stdio.h>

void bubble_sort(int arr[], int n)
{
  int i, j, temp;

  // O for externo serve para percorrer o vetor várias vezes, garantindo que todos os elementos sejam ordenados.
  // O for interno é responsável por comparar os elementos vizinhos e realizar as trocas quando necessário.
  // O funcionamento é simples, o menor valor vai sendo colocado na posição do maior valor até que o vetor esteja completamente ordenado.
  for (i = 0; i < n - 1; i++)
  {

    for (j = 0; j < n - i - 1; j++)
    {

      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

// Função para mostrar o vetor
void mostrar(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main()
{
  int arr[] = {5, 3, 8, 4, 99, 66, 1, 2, 0, 7};
  int n = sizeof(arr) / sizeof(arr[0]); // Calcula o número de elementos no vetor

  printf("Antes: ");
  mostrar(arr, n);

  bubble_sort(arr, n);

  printf("Depois: ");
  mostrar(arr, n);

  return 0;
}