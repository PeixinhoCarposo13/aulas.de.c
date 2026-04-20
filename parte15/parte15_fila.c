// Fila

/*
Uma fila (queue) em C é uma estrutura de dados que segue a lógica:
FIFO (First In, First Out)
o primeiro que entra é o primeiro que sai (igual fila de banco).

Operações principais:
head -> aponta para o início da fila
tail -> aponta para o final da fila
Enqueue → adiciona elemento no final
Dequeue → remove elemento do início
Peek/Front → vê o primeiro elemento
isEmpty → verifica se está vazia
isFull → verifica se está cheia (se for fila de tamanho fixo)
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Tamanho máximo da fila

// Variáveis globais da fila
int queue[MAX]; // Array para armazenar os elementos da fila
int front = 0;  // Índice do início da fila
int rear = -1;  // Índice do final da fila, começa em -1 porque a fila está inicialmente vazia
int size = 0;   // Variável para acompanhar o número de elementos na fila, começa em 0 porque a fila está inicialmente vazia

// Função para enfileirar (enqueue)
void enqueue(int element)
{
  if (size == MAX)
  {
    printf("Fila cheia!\n");
    return;
  }
  else
  {
    /*
    -quando rear é -1 a formula fica: rear = ( -1 + 1 ) % 5 = 0
    -quando rear é 0 a formula fica: rear = ( 0 + 1 ) % 5 = 1
    -quando rear é 1 a formula fica: rear = ( 1 + 1 ) % 5 = 2
    -quando rear é 2 a formula fica: rear = ( 2 + 1 ) % 5 = 3
    -quando rear é 3 a formula fica: rear = ( 3 + 1 ) % 5 = 4
    -quando rear é 4 a formula fica: rear = ( 4 + 1 ) % 5 = 0
    (fila circular)
    */
    rear = (rear + 1) % MAX; // Incrementa o índice do final da fila de forma circular de acordo com o exemplo acima
    queue[rear] = element;   // Adiciona o elemento no final da fila (na posição apontada por rear)
    size++;                  // Incrementa o tamanho da fila para refletir a adição do novo elemento
  }
}

// Função para desenfileirar (dequeue)
void dequeue()
{
  if (size == 0)
  {
    printf("Fila vazia!\n"); // verifica se a fila esta vazia
    return;
  }
  else
  {
    printf("Removendo: %d\n", queue[front]); // imprime o elemento que vai ser removido

    /*
    quando front é 0 → (0 + 1) % 5 = 1
    quando front é 1 → (1 + 1) % 5 = 2
    quando front é 2 → (2 + 1) % 5 = 3
    quando front é 3 → (3 + 1) % 5 = 4
    quando front é 4 → (4 + 1) % 5 = 0

    Ele não apaga o valor, só "anda" o início da fila.
    */
    front = (front + 1) % MAX; // Aqui vai incrementar de forma circular o índice do início da fila de acordo com o exemplo acima
    size--;                    // Decrementa o tamanho da fila para garantir a "remoção" do elemento
  }
}

// Função para mostrar a fila
void mostrar()
{
  if (size == 0)
  {
    printf("Fila vazia\n");
    return;
  }

  printf("Fila: ");
  for (int i = 0; i < size; i++) // Percorre a fila de acordo com o tamanho atual da fila (size) para mostrar os elementos
  {
    int index = (front + i) % MAX;
    printf("%d ", queue[index]);
  }
  printf("\n");
}

// Função para ver o primeiro elemento
void peek()
{
  if (size > 0)
  {
    printf("Primeiro elemento: %d\n", queue[front]); // Aqui é uma função para mostrar o front da fila
  }
  else
  {
    printf("Fila vazia\n"); // Verificação de se a fila está vazia
  }
}

int main()
{
  int element;

  // Inserção
  while (size < MAX) // Loop para inserir elementos na fila até atingir o tamanho máximo (MAX)
  {
    printf("Digite um elemento para enfileirar (0 para parar): ");
    scanf("%d", &element);

    if (element == 0)
      break;

    enqueue(element);
  }

  mostrar(); // Mostra a fila após as inserções

  // Remoção
  while (size > 0) // Loop para remover elementos da fila enquanto ela não estiver vazia
  {
    int choice;
    printf("Quer eliminar o elemento %d? (1 para sim, 0 para não): ", queue[front]);
    scanf("%d", &choice);

    if (choice == 1)
    {
      dequeue(); // Remove o elemento do início da fila
      mostrar(); // Mostra a fila após cada remoção para acompanhar as mudanças na fila
    }
    else
    {
      mostrar(); // Mostra a fila novamente se o usuário escolher não remover o elemento atual
      break;
    }
  }

  peek(); // Mostra o primeiro elemento da fila (front) após as remoções, ou indica que a fila está vazia

  return 0;
}