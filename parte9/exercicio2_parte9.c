/*
Faça um programa que receba do usuário o nome de um arquivo
texto e mostre na tela quantas linhas este arquivo possui.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arq;
  char nome_arquivo[100];
  char c;
  int linhas = 0;

  // Recebe o nome do arquivo
  printf("Digite o nome do arquivo com '.txt' no final: ");
  scanf("%s", nome_arquivo);

  // Abre o arquivo para leitura
  arq = fopen(nome_arquivo, "r");

  if (arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

  // Conta as linhas
  while ((c = fgetc(arq)) != EOF)
  {
    if (c == '\n')
    {
      linhas++;
    }
  }

  // Se o arquivo não estiver vazio, soma 1 linha
  // (caso não termine com '\n')
  if (linhas > 0)
  {
    linhas++;
  }

  int valor_real_linhas = linhas - 1;

  // Exibe o resultado
  printf("O arquivo possui %d linhas.\n", valor_real_linhas);

  // Fecha o arquivo
  fclose(arq);

  return 0;
}