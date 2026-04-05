// Declarando variáveis
#include <stdio.h>

// main -> função principal do programa
int main(){
    // Variável do tipo inteiro
    int idade = 25;
    // Variável do tipo ponto flutuante
    float altura = 1.75;
    // Variável do tipo caractere
    char genero = 'M';
    // Variável do tipo string (array de caracteres)
    char nome[20] = "João";
    // Imprimindo as variáveis
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Gênero: %c\n", genero);

    // Lendo um valor do usuário
    printf("Digite sua idade: ");
    // Lendo um valor inteiro do usuário e armazenando na variável idade
    scanf("%d", &idade); 
    // Imprimindo a idade lida do usuário
    printf("Sua idade é: %d\n", idade);
    return 0;
}