/*Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. O programa deve executar os seguintes passos:
- Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
- Armazene em uma variável inteira simples a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma;
- Modifique o vetor na posição 4, atribuindo a esta posição o valor 100;
- Mostre na tela cada valor do vetor A, um em cada linha.
*/

#include <stdio.h>

int main(){
    int A[6] = {1, 0, 5, -2, -5, 7}; // declaração e inicialização do vetor A
    int soma = A[0] + A[1] + A[5]; // calculando a soma dos valores nas posições A[0], A[1] e A[5]
    printf("A soma dos valores nas posições A[0], A[1] e A[5] é: %d\n", soma); // mostrando a soma na tela

    A[4] = 100; // modificando o valor na posição 4 do vetor para 100

    printf("Valores do vetor A:\n");
    for(int i = 0; i < 6; i++){
        printf("O %dº valor do vetor A é: %d\n", i + 1, A[i]); // mostrando cada valor do vetor A em uma linha
    }

    return 0;
}