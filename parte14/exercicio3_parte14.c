/*
Faça um programa que receba do usuário o tamanho de uma string
e chame uma função para alocar dinamicamente essa string.
Receba esta string do usuário. Por fim, apresente conteúdo dessa string sem suas vogais.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int tamanho_string; // variável para armazenar o tamanho da string
  char *string;       // ponteiro para alocação dinâmica da string

  printf("Digite o tamanho da string: ");
  scanf("%d", &tamanho_string); // lê o tamanho da string

  // Alocação dinâmica de memória para a string
  string = (char *)malloc((tamanho_string + 1) * sizeof(char)); // aloca memória para a string (tamanho + 1 para o caractere nulo)

  if (string)
  {
    printf("Digite a string: ");
    scanf("%s", string); // lê a string do usuário

    printf("String sem vogais: ");
    for (int i = 0; string[i] != '\0'; i++) // percorre a string até o caractere nulo
    {
      char c = string[i];
      if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
      {
        printf("%c", c); // imprime o caractere se não for uma vogal
      }
    }
    printf("\n");
  }
  else
  {
    printf("Erro ao alocar memória\n");
    return 1; // Encerra o programa com código de erro
  }

  free(string);  // libera a memória alocada
  string = NULL; // medida de segurança para evitar ponteiro pendente

  return 0;
}