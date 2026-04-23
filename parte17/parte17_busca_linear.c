// Busca linear

/*
Ela percorre o vetor elemento por elemento até encontrar o valor.
*/

#include <stdio.h>

// Função de busca linear
int busca_linear(int arr[], int n, int valor)
{
  // Percorre o vetor do início ao fim
  for (int i = 0; i < n; i++)
  {
    // Verifica se o elemento atual é igual ao valor buscado
    if (arr[i] == valor)
    {
      // Se encontrado, retorna a posição do elemento
      return i;
    }
  }

  // Se o valor não for encontrado, retorna -1
  return -1;
}

int main()
{

  int arr[] = {10, 20, 30, 40, 50};
  int n = 5;      // Tamanho do vetor
  int valor = 30; // Valor a ser buscado

  // Chama a função de busca linear e armazena o resultado
  int resultado = busca_linear(arr, n, valor);

  if (resultado != -1)
  {
    // Se o resultado for diferente de -1, significa que o valor foi encontrado, então imprime a posição do valor encontrado
    printf("Valor encontrado na posição %d\n", resultado);
  }
  else
  {
    // Se o resultado for -1, significa que o valor não foi encontrado, então imprime uma mensagem indicando que o valor não foi encontrado
    printf("Valor não encontrado\n");
  }

  return 0;
}