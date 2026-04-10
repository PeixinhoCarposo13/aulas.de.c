/*- Faça um programa que declare um inteiro, um real e um char, 
e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). 
Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.
*/

#include <stdio.h>

int main() {
    int inteiro = 5; // declaração de um inteiro
    float real = 3.14; // declaração de um real
    char caractere = 'A'; // declaração de um char

    int *p_inteiro = &inteiro; // ponteiro para inteiro
    float *p_real = &real; // ponteiro para real
    char *p_caractere = &caractere; // ponteiro para char

    // Imprimindo os valores antes da modificação
    printf("Valores antes da modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificando os valores usando os ponteiros
    *p_inteiro = 10; // modificando o valor do inteiro através do ponteiro
    *p_real = 6.28; // modificando o valor do real através do ponteiro
    *p_caractere = 'B'; // modificando o valor do char através do ponteiro

    // Imprimindo os valores após a modificação
    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}