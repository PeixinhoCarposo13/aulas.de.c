// Usando union
/*
No Union acontece isso:
Guarda o RA
Depois escreve o nome → apaga o RA
Depois escreve o cpf → apaga o nome
Depois escreve a idade → apaga tudo anterior
No final, só o último valor (idade) é válido.
*/

/*
O Union serve para economizar memória, pois ele só 
ocupa o espaço do maior tipo de dado que ele contém, 
ou seja, no exemplo acima, o Union un_dados_aluno ocupa 
100 bytes, pois o maior tipo de dado é o nome (char nome[100]), 
que ocupa 100 bytes. Já os outros tipos de dados 
(int RA, int cpf, int idade) ocupam apenas 4 bytes 
cada um. Portanto, o Union un_dados_aluno ocupa apenas 
100 bytes, mesmo contendo 4 tipos de dados diferentes.
*/

/*
Podemos utilizar o union em projetos onde precisamos armazenar 
diferentes tipos de dados, mas não precisamos armazenar todos 
os dados ao mesmo tempo. 
Por exemplo, em um sistema de cadastro de alunos, podemos utilizar 
um union para armazenar os dados do aluno, como RA, nome, CPF e idade.
Dessa forma, economizamos memória, pois só armazenamos um tipo de dado 
por vez, e não precisamos criar uma struct para cada tipo de dado.
*/

#include <stdio.h>

union un_dados_aluno
{
  int RA;
  char nome[100];
  int cpf;
  int idade;
}aln1; // union que contém os dados do aluno

int main()
{
  printf("Informe o RA do aluno: ");
  scanf("%d", &aln1.RA);
  getchar(); // limpa o buffer do teclado
  printf("O RA é: %d\n", aln1.RA);

  printf("Informe o nome do aluno: ");
  scanf("%s", aln1.nome);
  getchar(); // limpa o buffer do teclado
  printf("O nome é: %s\n", aln1.nome);

  printf("Informe o CPF do aluno: ");
  scanf("%d", &aln1.cpf);
  getchar(); // limpa o buffer do teclado
  printf("O CPF é: %d\n", aln1.cpf);

  printf("Informe a idade do aluno: ");
  scanf("%d", &aln1.idade);
  getchar(); // limpa o buffer do teclado
  printf("A idade é: %d\n", aln1.idade);
  
  // O espaço ocupado na memória vai ser:
  printf("A variavel 'aln1' ocupa %ld bytes na memória", sizeof(aln1));

  return 0;
}