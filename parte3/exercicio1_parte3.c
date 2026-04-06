//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.

#include <stdio.h>

int main(){
    int numero = 0; // inicializando a variável numero com 0
    printf("Os cinco primeiros multiplos de 3 maiores que 0 são:\n");
    for(int i = 0; i < 5; i++){
        numero += 3; // incrementando a variável numero em 3 a cada iteração do loop
        printf(" O %dº multiplo de 3 é: %d\n", i + 1, numero); // imprimindo o múltiplo de 3 atual na tela
    }
    printf("\n");
    return 0;

}