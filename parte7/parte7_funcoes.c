// funções em c

#include <stdio.h>

/*Quando as funções ficam depois do main é necessário colocar como
se fosse o cabeçalho da função para o programa reconhecer*/
void mensagem();
int soma_int(int x, int y);
float multip(int g, int h);

// main é a função principal
// é indicado que as outras funções fiquem depois do main
int main()
{
  // executando a função da mensagem
  mensagem();
  int a, b, sm, mlt;

  printf("Insira o primeiro valor que voce quer somar:");
  scanf("%d", &a);
  printf("Insira o segundo valor que voce quer somar:");
  scanf("%d", &b);

  // atribuindo o valor da soma a uma variavel
  sm = soma_int(a, b);
  printf("%d\n", sm);

  mlt = multip(a, b);
  printf("%d\n", mlt);

  return 0;
}

// Função retorna uma mensagem
void mensagem()
{
  printf("Hellow world");
}

// Função que retorna uma soma de inteiros
int soma_int(int x, int y)
{
  int soma;
  soma = x + y;
  return soma;
}
// Função que retorna uma multiplicação
float multip(int g, int h)
{
  int mult;
  mult = g * h;
  return mult;
}
