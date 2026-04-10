/*Faça um programa que tenha uma função que dado um valor numérico de entrada, 
gere e imprima como saída o número de linhas com pontos de exclamação, conforme 
exemplo abaixo (para n = 5):
!
! !
! ! !
! ! ! !
! ! ! ! !
*/

#include <stdio.h>

void imprimirExclamacao(int n);

int main() {
    int n;

    printf("Digite um valor numérico: ");
    scanf("%d", &n);

    imprimirExclamacao(n);

    return 0;
}

void imprimirExclamacao(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            printf("! ");
        }
        printf("\n");
    }
}