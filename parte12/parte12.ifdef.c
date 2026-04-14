// ifdef

/*
Ifdef serve para verificar se um identificador
específico foi definido. Se o identificador
tiver sido definido, o código dentro do bloco #ifdef
será incluído; caso contrário, ele será ignorado.
Isso é útil para incluir código condicionalmente
com base na definição de um identificador.
*/

#include <stdio.h>

/*#ifndef PI
#define PI 3.14
#endif*/

int main()
{
#ifdef PI
  printf("O valor de PI é: %.2f\n", PI);
#endif

  return 0;
}