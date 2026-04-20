// Pilha em C

/*
Uma pilha (stack) em C é uma estrutura de dados baseada na regra:
LIFO (Last In, First Out)
Ou seja: o último que entra é o primeiro que sai (igual uma pilha de pratos).

Você insere (push) no topo
Você remove (pop) do topo

Operações principais
Push → adiciona elemento no topo
Pop → remove elemento do topo
Peek/Top → vê o elemento do topo
isEmpty → verifica se está vazia

*/

#include <stdio.h>
#define MAX 5 // Tamanho máximo da pilha

int pilha[MAX]; // Array para armazenar os elementos da pilha
int topo = -1;  // topo é -1 quando a pilha está vazia, e vai incrementando conforme adicionamos elementos

void push(int valor)
{
  if (topo == MAX - 1)
  {
    printf("Pilha cheia!\n"); // Verifica se a pilha atingiu o tamanho máximo (topo == 4 para uma pilha de tamanho 5)
  }
  else
  {
    topo++;              // Incrementa o topo para apontar para a próxima posição disponível
    pilha[topo] = valor; // Adiciona o valor no topo da pilha
  }
}

void pop()
{
  if (topo == -1)
  {
    printf("Pilha vazia!\n"); // Verifica se a pilha está vazia (topo == -1), ou seja, não há elementos para remover
  }
  else
  {
    printf("Removido: %d\n", pilha[topo]); // Imprime o elemento que está sendo removido (o elemento do topo)
    topo--;                                // Decrementa o topo para "remover" o elemento do topo da pilha (ele apenas deixa de ser acessível, mas o valor ainda existe)
  }
}

void mostrar()
{
  if (topo == -1)
  {
    printf("Pilha vazia!\n"); // Verifica se a pilha está vazia (topo == -1), ou seja, não há elementos para mostrar
  }
  else
  {
    for (int i = topo; i >= 0; i--)
    {
      printf("%d\n", pilha[i]); // Imprime os elementos da pilha do topo para a base (do índice topo até 0)
    }
  }
}

int main()
{
  // Uso a função push para adicionar elementos na pilha
  push(10);
  push(20);
  push(30);

  // Uso a função mostrar para exibir os elementos da pilha
  mostrar();

  // Uso a função pop para remover o primeiro elemento da pilha
  pop();

  // Uso a função mostrar novamente para exibir os elementos restantes na pilha
  mostrar();

  return 0;
}