// string.h

/*
A biblioteca string.h em C fornece
funções para manipular strings
(cadeias de caracteres), como copiar,
comparar, concatenar e medir textos.
*/

/*
Tamanho da string
strlen(str) → retorna o número de caracteres
*/

/*
Copiar strings
strcpy(destino, origem) → copia uma string
strncpy() → copia com limite de caracteres
*/

/*
Concatenar (juntar) strings
strcat(destino, origem) → junta strings
strncat() → junta com limite de caracteres
*/

/*
Comparar strings
strcmp(a, b) → compara strings
*/

/*
Buscar dentro da string
strchr(str, c) → encontra caractere
strstr(str, sub) → encontra palavra
*/

#include <stdio.h>
#include <string.h>

int main()
{
  char a[50] = "Ola";
  char b[] = " Mundo";

  // tamanho
  printf("Tamanho: %zu\n", strlen(a));

  // concatenar
  strcat(a, b);
  printf("Concatenado: %s\n", a);

  // comparar
  if (strcmp(a, "Ola Mundo") == 0)
  {
    printf("Strings iguais\n");
  }

  // buscar
  if (strstr(a, "Mundo"))
  {
    printf("Palavra encontrada\n");
  }

  return 0;
}