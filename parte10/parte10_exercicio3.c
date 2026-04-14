/*
Considerando a estrutura que representa um vetor R³:
struct Vetor{
    float x;
    float y;
    float z;
};
Implemente um programa que receba, calcule e apresente a soma de dois vetores.
*/

#include <stdio.h>

struct vetor{
    float x;
    float y;
    float z;
};

int main()
{
    struct vetor v1, v2, soma;

    printf("Informe as coordenadas do vetor 1 (x y z): \n");
    printf("Informe o valor de x: ");
    scanf("%f", &v1.x);
    printf("Informe o valor de y: ");
    scanf("%f", &v1.y);
    printf("Informe o valor de z: ");
    scanf("%f", &v1.z);

    printf("Informe as coordenadas do vetor 2 (x y z): \n");
    printf("Informe o valor de x: ");
    scanf("%f", &v2.x);
    printf("Informe o valor de y: ");
    scanf("%f", &v2.y);
    printf("Informe o valor de z: ");
    scanf("%f", &v2.z);

    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;

    printf("A soma dos vetores é: (%.2f, %.2f, %.2f)", soma.x, soma.y, soma.z);

    return 0;
}