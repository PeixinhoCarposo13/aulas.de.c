// Ordenação de vetores
// Selection sort

/*
Funciona da seguinte maneira:
A cada passo, procura o menor elemento e coloca na posição correta
*/

#include <stdio.h>

void selection_sort(int arr[], int n) {
    int i, j, posicao_menor_numero, variavel_temporaria;

    for (i = 0; i < n - 1; i++) {
        posicao_menor_numero = i; // Assumo a posição de i como a posição do menor numero

        // Procura o menor elemento
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[posicao_menor_numero]) // Comparo a posição i com a posição j
            {
                posicao_menor_numero = j; // se o numero da posição j for o menor, a posição do menor numero passa a ser j
            }
        }

        // Troca os valores
        variavel_temporaria = arr[i]; // Passo o valor da posção i para uma variavel temporaria
        arr[i] = arr[posicao_menor_numero]; // Passo o valor da posição j para a posição i
        arr[posicao_menor_numero] = variavel_temporaria; // Passo o valor da variavel temporaria (valor antigo de i) para a posição j

    }
}

// função para mostrar a lista ordenada
void mostrar(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;

    printf("Antes: ");
    mostrar(arr, n);

    selection_sort(arr, n);

    printf("Depois: ");
    mostrar(arr, n);

    return 0;
}