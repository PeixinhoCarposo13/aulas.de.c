// Shell sort

/*
Ideia do Shell Sort
Ele resolve isso comparando elementos que estão distantes entre si.
Ele usa um valor chamado gap (intervalo).

Vetor:
[9, 8, 3, 7, 5, 6, 4, 1]

Compara elementos distantes de 4 posições
9 ↔ 5
8 ↔ 6
3 ↔ 4
7 ↔ 1

Resultado:
[5, 6, 3, 1, 9, 8, 4, 7]

Depois, o gap é reduzido e o processo se repete até que o gap seja 1,
momento em que o algoritmo se torna um simples insertion sort,
mas com os elementos já parcialmente ordenados,
o que melhora significativamente a eficiência do processo de ordenação.
*/

#include <stdio.h>

// Função para mostrar o vetor
void mostrar(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Função de ordenação Shell Sort
void shell_sort(int arr[], int n)
{
  int gap, i, j, temp;

  // O loop externo controla o valor do gap, começando com n/2 e reduzindo-o pela metade a cada iteração até que seja 0.
  for (gap = n / 2; gap > 0; gap /= 2)
  {

    // O loop interno percorre os elementos do vetor a partir do índice gap até o final do vetor.
    for (i = gap; i < n; i++)
    {

      // O valor atual é armazenado em temp para ser comparado e posicionado corretamente.
      temp = arr[i];

      // O loop mais interno compara o elemento temp com os elementos que estão a uma distância de gap atrás dele.
      for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
      {

        // Se o elemento a uma distância de gap atrás de temp for maior, ele é movido para a posição atual de j.
        arr[j] = arr[j - gap];
      }

      // Depois de encontrar a posição correta para temp, ele é colocado no lugar.
      arr[j] = temp;

      printf("Interação da posição %d com a posição %d  no Gap %d resulta na seguinte ordenação: ", i, j, gap);
      mostrar(arr, n);
    }
  }
}

int main()
{
  int arr[] = {9, 8, 3, 7, 5, 6, 4, 1};
  int n = 8;

  printf("Antes: ");
  mostrar(arr, n);

  shell_sort(arr, n);

  printf("Depois: ");
  mostrar(arr, n);

  return 0;
}