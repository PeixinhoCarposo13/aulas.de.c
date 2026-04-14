/*
Crie um programa que tenha uma struct chamada aluno contendo nome, 
número de matrícula e curso. Leia do usuário a informação de 5 alunos, 
armazene em um vetor desta estrutura e imprima os dados na tela.
*/

#include <stdio.h>

struct st_aluno
{
  int RA;
  char nome[100];
  int cpf;
  int idade;
}alunos[5]; // array de structs - pode ser declarado no momento da definição da struct

int main()
{
  for(int i = 0; i < 5; i++)
  {
    printf("===================%dº ALUNO===================\n", i+1);
    printf("Informe o RA do aluno %d: ", i+1);
    scanf("%d", &alunos[i].RA);
    getchar(); // limpa o buffer do teclado

    printf("Informe o nome do aluno %d: ", i+1);
    scanf("%s", alunos[i].nome);
    getchar(); // limpa o buffer do teclado

    printf("Informe o CPF do aluno %d: ", i+1);
    scanf("%d", &alunos[i].cpf);
    getchar(); // limpa o buffer do teclado

    printf("Informe a idade do aluno %d: ", i+1);
    scanf("%d", &alunos[i].idade);
    getchar(); // limpa o buffer do teclado
  }
  
  for(int i = 0; i < 5; i++)
  {
    printf("\nO RA do aluno %d é: %d", i+1, alunos[i].RA);
    printf("\nO nome do aluno %d é: %s", i+1, alunos[i].nome);
    printf("\nO CPF do aluno %d é: %d", i+1, alunos[i].cpf);
    printf("\nA idade do aluno %d é: %d", i+1, alunos[i].idade);
  }

  return 0;
}