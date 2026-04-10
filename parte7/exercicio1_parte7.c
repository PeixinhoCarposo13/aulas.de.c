//- Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o maior valor.
#include <stdio.h>


int encontrarMaior(int vetor[], int tamanho);

int main(){
    int vetor[10]; // declaração do vetor de 10 posições

    // lendo os valores do vetor
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = encontrarMaior(vetor, 10); // chamando a função e armazenando o resultado
    printf("O maior valor do vetor é: %d\n", maior);

    return 0;
}

int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for(int i = 1; i < tamanho; i++) {
        if(vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}