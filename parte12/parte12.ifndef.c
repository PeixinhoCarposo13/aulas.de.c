// ifndef

/*ifndef é uma diretiva de pré-processamento em C
que é usada para evitar a inclusão múltipla de um
arquivo de cabeçalho. Ela verifica se um identificador
específico (geralmente o nome do arquivo de cabeçalho)
já foi definido. Se não tiver sido definido, o código
dentro do bloco #ifndef será incluído; caso contrário,
ele será ignorado.
*/

#include <stdio.h>

#ifndef PI
#define PI 3.14
#endif

int main()
{
  printf("O valor de PI é: %.2f\n", PI);
  return 0;
}