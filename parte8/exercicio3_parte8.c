/*
Faça um programa que contenha um array de inteiros contendo 5 elementos. 
Utilizando apenas aritmética de ponteiros, leia este array do teclado e 
imprima o dobro de cada valor lido.
*/

#include <stdio.h>

int main() {
    int vetor[5]; // declaração do array de inteiros
    int *p_vetor = vetor; // ponteiro para o primeiro elemento do array

    // lendo os valores do array usando aritmética de ponteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o %dº número inteiro: ", i + 1);
        scanf("%d", p_vetor + i); // usando aritmética de ponteiros para ler os valores
    }

    // imprimindo o dobro de cada valor lido usando aritmética de ponteiros
    printf("\nDobro dos valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", 2 * (*(p_vetor + i))); // usando aritmética de ponteiros para acessar os valores e imprimir o dobro
    }
    printf("\n");

    return 0;
}