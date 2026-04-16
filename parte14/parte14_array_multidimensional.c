// Alocação de memória dinâmica para arrays multidimensionais

/*
Temos duas formas de alocar memória para arrays multidimensionais:
1. Alocação como “bloco único” (MAIS SIMPLES)
2. Alocação com ponteiro de ponteiro (matriz “real”)

Sintaxe para alocação em bloco único:
ponteiro = (tipo*) malloc(linhas * colunas * sizeof(tipo));

O professor nao passou o segundo tipo então por enquanto vamos focar apenas no primeiro tipo de alocação.
*/

//======================ALOCAÇÃO EM BLOCO UNICO=====================================
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int linhas = 2, colunas = 2; // Essa vai ser uma matriz 2x2

  int *matriz;

  matriz = (int *)malloc(linhas * colunas * sizeof(int)); // aloca um bloco único de memória para a matriz 2x2

  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      printf("Digite um numero para a posição [%d][%d]: ", i, j);
      scanf("%d", &matriz[i * colunas + j]); // acesso: linha * colunas + coluna
    }
  }

  printf("Matriz digitada:\n");
  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
      printf("%d ", matriz[i * colunas + j]); // acesso: linha * colunas + coluna
    }
    printf("\n");
  }

  free(matriz);
  return 0;
}
