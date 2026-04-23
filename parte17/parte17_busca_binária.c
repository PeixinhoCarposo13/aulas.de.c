// Busca binária

/*
O vetor precisa estar ordenado para a busca binária funcionar.

Em vez de procurar de um por um, ela sempre olha o meio do vetor.
Se o valor procurado for:
menor → vai para esquerda
maior → vai para direita
igual → encontrou
*/

#include <stdio.h>

// Função de busca binária
int busca_binaria(int arr[], int n, int valor)
{

  int inicio = 0;
  int fim = n - 1;

  while (inicio <= fim)
  {
    // Calcula o índice do meio do vetor
    int meio = (inicio + fim) / 2;

    // Verifica se o elemento do meio é igual ao valor buscado
    if (arr[meio] == valor)
    {
      // Se encontrado, retorna a posição do elemento
      return meio;
    }
    // Se o valor buscado for menor que o elemento do meio, ajusta o fim para procurar na metade esquerda
    else if (valor < arr[meio])
    {
      fim = meio - 1;
    }
    // Se o valor buscado for maior que o elemento do meio, ajusta o início para procurar na metade direita
    else
    {
      inicio = meio + 1;
    }
  }
  // Se o valor não for encontrado, retorna -1
  return -1;
}

int main()
{

  int arr[] = {10, 20, 30, 40, 50, 60, 70};
  int n = 7;      // Tamanho do vetor
  int valor = 50; // Valor a ser buscado

  // Chama a função de busca binária e armazena o resultado
  int resultado = busca_binaria(arr, n, valor);

  if (resultado != -1)
  {
    printf("Valor encontrado na posição %d\n", resultado);
  }
  else
  {
    printf("Valor não encontrado\n");
  }

  return 0;
}