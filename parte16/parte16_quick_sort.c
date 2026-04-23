// Quick sort

/*
Ideia principal
O Quick Sort escolhe um elemento chamado:
pivô

E organiza o vetor assim:
menores que o pivô → esquerda
maiores que o pivô → direita

Depois ele faz isso novamente nas duas partes (recursão).
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

// Função para particionar o vetor - colocar o pivô na posição correta
int particao(int arr[], int inicio, int fim)
{
  int pivo = arr[fim]; // Escolhemos o último elemento como pivô
  int i = inicio - 1;  // Índice do menor elemento
  int temp;            // Variável temporária para troca

  // Percorremos o vetor do início até o fim-1
  for (int j = inicio; j < fim; j++)
  {
    // Se o elemento atual for menor que o pivô, incrementamos o índice do menor elemento e fazemos a troca
    if (arr[j] < pivo)
    {
      i++;

      // Troca arr[i] e arr[j]
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  temp = arr[i + 1];
  arr[i + 1] = arr[fim];
  arr[fim] = temp;

  return i + 1;
}

// Função recursiva do Quick Sort
void quick_sort(int arr[], int inicio, int fim)
{
  if (inicio < fim)
  {
    // Particiona o vetor e obtém a posição do pivô
    int p = particao(arr, inicio, fim);
    // Chama recursivamente para os subvetores à esquerda e à direita do pivô
    quick_sort(arr, inicio, p - 1);
    quick_sort(arr, p + 1, fim);
  }
}

int main()
{
  int arr[] = {8, 3, 1, 7, 0, 10, 2};
  int n = 7;

  printf("Antes: ");
  mostrar(arr, n);

  quick_sort(arr, 0, n - 1);

  printf("Depois: ");
  mostrar(arr, n);

  return 0;
}