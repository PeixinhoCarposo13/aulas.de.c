//- Faça um programa que tenha uma função que, dado um caractere qualquer de entrada, retorne o mesmo caractere sempre em maiúsculo.

#include <stdio.h>
#include <ctype.h> // biblioteca para funções de manipulação de caracteres

char converterParaMaiusculo(char caractere);

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    char maiusculo = converterParaMaiusculo(caractere);
    printf("O caractere em maiúsculo é: %c\n", maiusculo);

    return 0;
}

char converterParaMaiusculo(char caractere) {
    return toupper(caractere); // função da biblioteca ctype.h que converte um caractere para maiúsculo
}