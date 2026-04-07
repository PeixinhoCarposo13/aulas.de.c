//Matrizes
#include <stdio.h>

//arrays multidimensionais (matrizes)
int main(){
    //matriz de inteiros 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz de inteiros 3x3:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]); // acessando os elementos da matriz usando índices
        }
        printf("\n");
    }

    //matriz de nomes
    char nomes[2][20] = {
        "Alice",
        "Bob"
    };
    printf("\nMatriz de nomes:\n");
    for(int i = 0; i < 2; i++){
        printf("Nome %d: %s\n", i + 1, nomes[i]); // acessando os elementos da matriz de strings
    }

    return 0;
}