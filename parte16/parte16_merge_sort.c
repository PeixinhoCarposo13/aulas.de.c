// Merge Sort

/*
Ideia principal
O Merge Sort faz:
Divide o vetor em várias partes menores
Continua dividindo até sobrar apenas elementos individuais
Junta tudo novamente em ordem
*/

#include <stdio.h>

void merge(int arr[], int inicio, int meio, int fim)
{
  int i, j, k;

  int n1 = meio - inicio + 1; // Tamanho do subvetor esquerdo
  int n2 = fim - meio;        // Tamanho do subvetor direito

  int esquerda[n1]; // Subvetor esquerdo
  int direita[n2];  // Subvetor direito

  // Copia os dados para os subvetores esquerdo
  for (i = 0; i < n1; i++)
    esquerda[i] = arr[inicio + i];

  // Copia os dados para o subvetor direito
  for (j = 0; j < n2; j++)
    direita[j] = arr[meio + 1 + j];

  i = 0;
  j = 0;
  k = inicio;

  // Mescla os subvetores de volta para arr[]
  while (i < n1 && j < n2)
  {
    // Compara os elementos dos subvetores e coloca o menor de volta no vetor original
    if (esquerda[i] <= direita[j])
    {
      arr[k] = esquerda[i];
      i++;
    }
    else
    {
      arr[k] = direita[j];
      j++;
    }
    k++;
  }

  // Copia os elementos restantes do subvetor esquerdo, se houver
  while (i < n1)
  {
    arr[k] = esquerda[i];
    i++;
    k++;
  }

  // Copia os elementos restantes do subvetor direito, se houver
  while (j < n2)
  {
    arr[k] = direita[j];
    j++;
    k++;
  }
}

// Função recursiva do Merge Sort
void merge_sort(int arr[], int inicio, int fim)
{
  if (inicio < fim)
  {
    // Encontra o ponto médio do vetor para dividir em duas metades
    int meio = (inicio + fim) / 2;

    // Chama recursivamente para as duas metades
    merge_sort(arr, inicio, meio);  // Ordena a primeira metade
    merge_sort(arr, meio + 1, fim); // Ordena a segunda metade

    merge(arr, inicio, meio, fim); // Mescla as metades ordenadas
  }
}

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
  int arr[] = {8, 3, 5, 1, 7, 6};
  int n = 6;

  printf("Antes: ");
  mostrar(arr, n);

  merge_sort(arr, 0, n - 1);

  printf("Depois: ");
  mostrar(arr, n);

  return 0;
}