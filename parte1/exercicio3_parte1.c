//Leia um numero e imprima o resultado do quadrado desse numero.

#include <stdio.h>

int main(){
    // declarando a variável numero do tipo inteiro
    int numero;
    // declarando a variável quadrado do tipo inteiro
    int quadrado;
    
    // aqui solicito ao usuário que digite um número inteiro.
    printf("Digite um numero inteiro: ");
    // aqui leio o número digitado pelo usuário e armazeno na variável numero.
    scanf("%d", &numero);
    
    // calculando o quadrado do número digitado pelo usuário e armazenando na variável quadrado
    quadrado = numero * numero;
    
    // aqui imprimo o resultado do quadrado do número digitado pelo usuário na tela.
    printf("O quadrado do numero digitado é: %d\n", quadrado);
    
    return 0;
}