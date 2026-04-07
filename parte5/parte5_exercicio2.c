//Faça um programa que leia um vetor de 10 posições. Conte e mostre quantos valores pares ele possui.

#include <stdio.h>

int main(){
    int vetor[10]; // declaração do vetor de 10 posições
    int contador_pares = 0; // variável para contar os valores pares

    // lendo os valores do vetor
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            contador_pares++; // incrementando o contador se o número for par
        }
    }

    printf("O vetor possui %d valores pares.\n", contador_pares); // mostrando a quantidade de valores pares na tela

    return 0;
}