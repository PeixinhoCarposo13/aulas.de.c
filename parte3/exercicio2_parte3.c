//Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).
#include <stdio.h>

int main(){
    int numero = 0; // inicializando a variável numero com 0
    int i = 0; //contador
    printf("Os valores de 100 em 100 até 100000 são:\n");
    while(numero < 100000){
        i++; // incrementando o contador a cada iteração do loop
        numero += 100; // incrementando a variável numero em 100 a cada iteração do loop
        printf("O %dº valor nessa sequencia é: %d\n", i, numero); // imprimindo o valor atual na tela
    }
    printf("\n");
    return 0;
}