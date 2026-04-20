// Lista Encadenada em C

/*
Uma lista encadeada (linked list) em C é uma estrutura
de dados onde os elementos não ficam em posições fixas
na memória (como no vetor).
Em vez disso, cada elemento aponta para o próximo.

Cada elemento (chamado de nó) tem duas partes:
[dado | ponteiro]
dado → valor armazenado
ponteiro → endereço do próximo nó

[10 | *] → [20 | *] → [30 | *] → NULL
O primeiro é chamado de cabeça (head)
O último aponta para NULL para indicar o fim da lista
*/

#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó
struct Node // Node é nó em inglês
{
  int valor;            // Aqui vai ser armazenado o valor do nó
  struct Node *proximo; // Aqui vai ser um ponteiro para o próximo nó
};

typedef struct Node Node; // Para facilitar a escrita, podemos usar "Node" em vez de "struct Node"

//Função para verificar se a lista está vazia
int vazia(Node *head)
{
  if(head == NULL)
  {
    return 1; // Lista vazia
  }else
  {
    return 0; // Lista não vazia
  }
}

// Função para iniciarr a lista
void iniciar(Node **head)
{
  *head = NULL; // A cabeça da lista começa apontando para NULL
}

//Função para inserir o valor no início da lista
void inserir_inicio(Node **head, int valor)
{
  Node *novo_node = (Node *)malloc(sizeof(Node)); // Aloca memória para o novo nó
  if(novo_node == NULL) // Verifica se a alocação foi bem-sucedida
  {
    printf("Erro ao alocar memória!\n");
    return;
  }
  novo_node->valor = valor; // Atribui o valor ao novo nó
  novo_node->proximo = *head; // O próximo do novo nó é a cabeça atual
  *head = novo_node; // A cabeça agora é o novo nó
}

// Função para inserir um novo nó no final da lista
void inserir(Node **head, int valor)
{
  Node *novo_node = (Node *)malloc(sizeof(Node)); // Aloca memória para o novo nó
  if(novo_node == NULL) // Verifica se a alocação foi bem-sucedida
  {
    printf("Erro ao alocar memória!\n");
    return;
  }
  novo_node->valor = valor; // Atribui o valor ao novo nó
  novo_node->proximo = NULL; // O próximo do novo nó é NULL, pois será o último

  if(vazia(*head)) // Se a lista estiver vazia, o novo nó se torna a cabeça
  {
    *head = novo_node;
  }else
  {
    Node *atual = *head; // Começa do primeiro nó
    while(atual->proximo != NULL) // Percorre até o último nó
    {
      atual = atual->proximo; // Move para o próximo nó
    }
    atual->proximo = novo_node; // O último nó agora aponta para o novo nó
  }
}

// Função para imprimir os valores da lista
void imprimir(Node *head)
{
  Node *atual = head; // Começa do primeiro nó
  while(atual != NULL) // Percorre até o final da lista
  {
    printf("%d -> ", atual->valor); // Imprime o valor do nó atual
    atual = atual->proximo; // Move para o próximo nó
  }
  printf("NULL\n"); // Indica o fim da lista
}

//Função para interagir com o usuário 1- Inserir no início, 2- Inserir no final, 3- Imprimir a lista, 4- Sair
void menu(Node **head)
{
  int opcao, valor;
  do
  {
    printf("Menu:\n");
    printf("1- Inserir no início\n");
    printf("2- Inserir no final\n");
    printf("3- Imprimir a lista\n");
    printf("4- Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
      case 1:
        printf("Digite o valor para inserir no início: ");
        scanf("%d", &valor);
        inserir_inicio(head, valor);
        break;
      case 2:
        printf("Digite o valor para inserir no final: ");
        scanf("%d", &valor);
        inserir(head, valor);
        break;
      case 3:
        imprimir(*head);
        break;
      case 4:
        printf("Saindo...\n");
        break;
      default:
        printf("Opção inválida! Tente novamente.\n");
    }
  } while(opcao != 4); // Continua até o usuário escolher sair
}

int main()
{
  Node *head; // Ponteiro para a cabeça da lista
  iniciar(&head); // Inicializa a lista

  menu(&head); // Chama o menu para interagir com o usuário

  return 0;
}