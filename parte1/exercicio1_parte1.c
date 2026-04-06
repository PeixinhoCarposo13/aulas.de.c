//Faça um programa que leia um numero inteiro e o imprima na tela.
#include <stdio.h>

int main(){
    // declareio a variável numero do tipo inteiro
    int numero;
    // aqui solicito ao usuário que digite um número inteiro.
    printf("Digite um numero inteiro: ");
    // aqui leio o número digitado pelo usuário e armazeno na variável numero.
    scanf("%d", &numero);
    // aqui imprimo o número digitado pelo usuário na tela.
    printf("O numero digitado foi: %d\n", numero);
    return 0;
}