/*Faça um programa que:
a) Crie/abra um arquivo texto de nome “arq.txt”;
b) Permita que o usuário grave diversos caracteres
neste arquivo, até que o usuário entre com o caractere ‘0’;
c) Feche o arquivo;
d) Abra e leia o arquivo, caractere por caractere, e escreva
na tela todos os caracteres armazenados.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  FILE *arq;
  char str[100];

  // a) Criar/abrir arquivo para escrita
  arq = fopen("arq.txt", "w");

  if (arq == NULL)
  {
    printf("Erro ao abrir o arquivo!\n");
    return 1;
  }

  while (1)
  {
    // b) Ler palavras até digitar "0"
    printf("Digite palavras (digite '0' para parar):\n");
    scanf("%s", str);

    if (strcmp(str, "0") == 0)
    {
      break;
    }

    // Salva cada palavra em uma nova linha
    fprintf(arq, "%s\n", str);
  }

  // c) Fechar o arquivo
  fclose(arq);

  // d) Abrir para leitura
  arq = fopen("arq.txt", "r");

  if (arq == NULL)
  {
    printf("Erro ao abrir o arquivo para leitura!\n");
    return 1;
  }

  printf("\nConteudo do arquivo:\n");

  // Ler e mostrar palavra por palavra
  while (fscanf(arq, "%s", str) != EOF)
  {
    printf("%s\n", str);
  }

  fclose(arq);

  return 0;
}