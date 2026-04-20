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