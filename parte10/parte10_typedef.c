// Usando typedef

#include <stdio.h>

int main()
{
    /* typedef -> Define um novo tipo de dado, associando o nome "nota" ao tipo float 
    deste modo que podemos usar "nota" para declarar variáveis do tipo float */
    typedef float nota;
    int n1, n2;

    printf("Informe a nota 1: ");
    scanf("%d", &n1);
    printf("Informe a nota 2: ");
    scanf("%d", &n2);

    nota media = (n1 + n2) / 2.0;

    printf("A média é: %.2f", media);

    return 0;
}

