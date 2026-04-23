// heap sort

/*
Ideia do Heap Sort
Transforma o vetor em um Max Heap
O maior elemento vai para a raiz
Troca raiz com último elemento
Remove o último da heap
Repete
*/

#include <stdio.h>

void mostrar(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Função para transformar um vetor em um Max Heap
void heapify(int arr[], int n, int i)
{
  int maior = i;            // Inicializa maior como raiz
  int esquerda = 2 * i + 1; // Índice do filho da esquerda
  int direita = 2 * i + 2;  // Índice do filho da direita
  int temp;                 // Variável temporária para troca

  if (esquerda < n && arr[esquerda] > arr[maior]) // Se o filho da esquerda for maior que a raiz
    maior = esquerda;

  if (direita < n && arr[direita] > arr[maior]) // Se o filho da direita for maior que a raiz
    maior = direita;

  if (maior != i) // Se a raiz não for o maior, troca e continua heapificando
  {
    temp = arr[i];
    arr[i] = arr[maior];
    arr[maior] = temp;

    // Recursivamente para heapificar a subárvore afetada
    heapify(arr, n, maior);
  }
}

// Função principal do Heap Sort
void heap_sort(int arr[], int n)
{

  // construir o heap
  for (int i = n / 2 - 1; i >= 0; i--)
  {
    heapify(arr, n, i);
  }

  // ordenar porque o maior elemento está na raiz (Quando o heap é construído o arr fica em ordem decrescente entao temos que inverter)
  for (int i = n - 1; i > 0; i--)
  {
    int temp = arr[0];
    arr[0] = arr[i];
    arr[i] = temp;

    // chama heapify na raiz para reduzir o heap
    heapify(arr, i, 0);
  }
}

int main()
{
  int arr[] = {4, 10, 3, 5, 1};
  int n = 5;

  printf("Antes: ");
  mostrar(arr, n);

  heap_sort(arr, n);

  printf("Depois: ");
  mostrar(arr, n);

  return 0;
}