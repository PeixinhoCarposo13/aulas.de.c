//Faça um programa que leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.

#include <stdio.h>

int main(){
    int vetor[10]; // declaração do vetor de 10 posições

    // lendo os valores do vetor
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        if(vetor[i] < 0){
            vetor[i] = 0; // atribuindo valor 0 para elementos negativos
        }
    }

    printf("Valores do vetor após atribuição de 0 para elementos negativos:\n");
    for(int i = 0; i < 10; i++){
        printf("O %dº valor do vetor é: %d\n", i + 1, vetor[i]);
    }

    return 0;
}