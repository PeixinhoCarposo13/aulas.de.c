// definindo tipos

#include <stdio.h>
#include <string.h>

// struct -> estrutura

struct st_aluno
{
  int RA;
  char nome[100];
  int cpf;
  int idade;
};

int main()
{
  struct st_aluno aln1;

  printf("Informe o RA do aluno: ");
  scanf("%d", &aln1.RA);

  printf("O RA é: %d", aln1.RA);

  return 0;
}