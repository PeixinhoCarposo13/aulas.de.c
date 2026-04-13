/*
Faça um programa que receba do usuário o nome de um arquivo
texto e um caractere. Mostre na tela quantas vezes aquele
caractere aparece dentro do arquivo.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *arq;
  char nome_arquivo[100];
  char c, caractere;
  int contador = 0;

  // Recebe o nome do arquivo
  printf("Digite o nome do arquivo: ");
  scanf("%s", nome_arquivo);

  // Recebe o caractere a ser buscado
  printf("Digite o caractere a ser procurado: ");
  scanf(" %c", &caractere);

  // Abre o arquivo
  arq = fopen(nome_arquivo, "r");

  if (arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

  // Percorre o arquivo caractere por caractere
  while ((c = fgetc(arq)) != EOF)
  {
    if (c == caractere)
    {
      contador++;
    }
  }

  // Mostra o resultado
  printf("O caractere '%c' aparece %d vezes no arquivo.\n", caractere, contador);

  // Fecha o arquivo
  fclose(arq);

  return 0;
}