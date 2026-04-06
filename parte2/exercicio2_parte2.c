//Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

int main(){
    // declarando as variáveis nota1, nota2, nota3 e nota4 do tipo ponto flutuante
    float nota1, nota2, nota3, nota4;
    // declarando a variável media do tipo ponto flutuante
    float media;
    
    // aqui solicito ao usuário que digite a primeira nota.
    printf("Digite a primeira nota: ");
    // aqui leio a primeira nota digitada pelo usuário e armazeno na variável nota1.
    scanf("%f", &nota1);
    
    // aqui solicito ao usuário que digite a segunda nota.
    printf("Digite a segunda nota: ");
    // aqui leio a segunda nota digitada pelo usuário e armazeno na variável nota2.
    scanf("%f", &nota2);
    
    // aqui solicito ao usuário que digite a terceira nota.
    printf("Digite a terceira nota: ");
    // aqui leio a terceira nota digitada pelo usuário e armazeno na variável nota3.
    scanf("%f", &nota3);
    
    // aqui solicito ao usuário que digite a quarta nota.
    printf("Digite a quarta nota: ");
    // aqui leio a quarta nota digitada pelo usuário e armazeno na variável nota4.
    scanf("%f", &nota4);
    
    // calculando a média aritmética das quatro notas e armazenando na variável media
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    // aqui imprimo o resultado da média aritmética das quatro notas na tela.
    printf("A media aritmetica das quatro notas é: %.2f\n", media);
    
    return 0;
}