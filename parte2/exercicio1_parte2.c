//Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos.

#include <stdio.h>

int main(){
    // declarando as variáveis num1, num2 e num3 do tipo inteiro.
    int num1, num2, num3;

    // declarando as variáveis quadrado_num1, quadrado_num2 e quadrado_num3 do tipo inteiro.
    int quadrado_num1, quadrado_num2, quadrado_num3;

    // declarando a variável soma_quadrados do tipo inteiro.
    int soma_quadrados;
    
    // aqui solicito ao usuário que digite o primeiro número inteiro.
    printf("Digite o primeiro numero inteiro: ");
    // aqui leio o número digitado pelo usuário e armazeno na variável num1.
    scanf("%d", &num1);
    
    // aqui solicito ao usuário que digite o segundo número inteiro.
    printf("Digite o segundo numero inteiro: ");
    // aqui leio o número digitado pelo usuário e armazeno na variável num2.
    scanf("%d", &num2);
    
    // aqui solicito ao usuário que digite o terceiro número inteiro.
    printf("Digite o terceiro numero inteiro: ");
    // aqui leio o número digitado pelo usuário e armazeno na variável num3.
    scanf("%d", &num3);
    
    // calculando os quadrados dos três números inteiros e armazenando nas variáveis correspondentes
    quadrado_num1 = num1 * num1;
    quadrado_num2 = num2 * num2;
    quadrado_num3 = num3 * num3;
    
    // calculando a soma dos quadrados e armazenando na variável soma_quadrados
    soma_quadrados = quadrado_num1 + quadrado_num2 + quadrado_num3;
    
    // aqui imprimo a soma dos quadrados dos três números inteiros na tela.
    printf("A soma dos quadrados dos tres numeros inteiros é: %d\n", soma_quadrados);
    
    return 0;
}