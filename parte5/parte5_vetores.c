//vetores
#include <stdio.h>

int main(){
    //array uni-dimensional
    
    //vetores de inteiros
    int numeros[5] = {10, 20, 30, 40, 50}; // declaração e inicialização de um vetor de inteiros
    printf("Vetor de inteiros:\n");
    for(int i = 0; i < 5; i++){
        printf("Elemento %d: %d\n", i, numeros[i]); // acessando os elementos do vetor usando índices
    }
    printf("\n");

    //vetores de caracteres (strings)
    char palavra[20]; // declaração um vetor de caracteres (string)
    printf("Vetor de caracteres (string):\n");
    printf("Qual é a sua palavra favorita? ");
    scanf("%s", palavra); // lendo uma string do usuário
    printf("Palavra: %s\n", palavra); // acessando a string usando o nome do vetor

    printf("\n");

    //vetores de floats
    float decimais[3]; // declaração de um vetor de floats
    printf("Vetor de floats:\n");
    for(int i = 0; i < 3; i++){
        printf("Digite o %dº numero decimal: ", i + 1);
        scanf("%f", &decimais[i]); // lendo os valores do vetor de floats
    }


}
