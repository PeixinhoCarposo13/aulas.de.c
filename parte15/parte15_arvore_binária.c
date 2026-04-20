//Árvore binária em C
/*Uma árvore binária é uma estrutura de dados 
hierárquica onde cada nó tem no máximo dois filhos, 
chamados de filho esquerdo e filho direito. 
A árvore é composta por nós, onde cada nó contém um valor 
e ponteiros para seus filhos. A raiz é o nó principal 
da árvore, e os nós sem filhos são chamados de folhas.
*/

#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó
struct Node {
    int valor; // Valor armazenado no nó
    struct Node* left; // Ponteiro para o filho esquerdo
    struct Node* right; // Ponteiro para o filho direito
};

// Criar novo nó
struct Node* novoNo(int valor) {
    struct Node* novo = (struct Node*) malloc(sizeof(struct Node)); // Aloca memória para o novo nó
    if (novo == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1); // Encerra o programa em caso de falha na alocação
    }
    novo->valor = valor; // Atribui o valor ao nó
    novo->left = NULL; // O filho esquerdo começa como NULL
    novo->right = NULL; // O filho direito começa como NULL
    return novo;
}

// Inserir na árvore
struct Node* inserir(struct Node* raiz, int valor) {
    if (raiz == NULL) {
        return novoNo(valor); // Se a raiz for NULL, cria um novo nó e retorna
    }

    if (valor < raiz->valor) {
        raiz->left = inserir(raiz->left, valor); // Se o valor for menor, insere no filho esquerdo
    } else {
        raiz->right = inserir(raiz->right, valor); // Se o valor for maior ou igual, insere no filho direito
    }

    return raiz;
}

// Mostrar em ordem (ordenado)
void emOrdem(struct Node* raiz) {
    if (raiz != NULL) {
        emOrdem(raiz->left); // Primeiro visita o filho esquerdo
        printf("%d ", raiz->valor); // Depois visita o nó atual
        emOrdem(raiz->right);  // Por último visita o filho direito
    }
}

int main() {
    struct Node* raiz = NULL;
    int valor;

    // Inserção de dados
    while (1) {
        printf("Digite um valor (0 para parar): ");
        scanf("%d", &valor);

        if (valor == 0) break;

        raiz = inserir(raiz, valor);
    }

    // Exibir árvore
    printf("\nValores em ordem: ");
    emOrdem(raiz);

    printf("\n");

    return 0;
}
