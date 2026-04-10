/*
Faça um programa que contenha duas variáveis inteiras. 
Leia estas variáveis do teclado. Em seguida, 
compare seus endereços e exiba o conteúdo do maior endereço.
*/


#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &var1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &var2);

    int *p_var1 = &var1; // ponteiro para var1
    int *p_var2 = &var2; // ponteiro para var2

    // Comparando os endereços das variáveis com os ponteiros e exibindo o conteúdo do maior endereço
    if (p_var1 > p_var2) {
        printf("O conteúdo do maior endereço é: %d\n", var1);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", var2);
    }

    // Imprimindo os endereços das variáveis para referência
    printf("Endereço de var1: %p\n", (void*)p_var1);
    printf("Endereço de var2: %p\n", (void*)p_var2);

    return 0;
}