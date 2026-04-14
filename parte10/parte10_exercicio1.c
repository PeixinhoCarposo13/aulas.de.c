/*
Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma struct.
*/

#include <stdio.h>

struct st_pessoa
{
  char nome[100];
  int idade;
  char endereco[100];
}pessoa1; // struct que contém os dados da pessoa

int main()
{
  printf("Informe o nome da pessoa: ");
  scanf("%s", pessoa1.nome);
  getchar(); // limpa o buffer do teclado

  printf("Informe a idade da pessoa: ");
  scanf("%d", &pessoa1.idade);
  getchar(); // limpa o buffer do teclado

  printf("Informe o endereço da pessoa: ");
  scanf("%s", pessoa1.endereco);
  getchar(); // limpa o buffer do teclado

  printf("O nome é: %s", pessoa1.nome);
  printf("\nA idade é: %d", pessoa1.idade);
  printf("\nO endereço é: %s", pessoa1.endereco);

  return 0;
}