//Peça ao usuário para digitar tres valores inteiros e imprima a soma desses valores.

#include <stdio.h>

int main(){
    // declarando as variáveis.
    int num1, num2, num3;
    // declarando a variável soma.
    int soma;
    
    // solicitando ao usuário que digite o primeiro número inteiro
    printf("Digite o primeiro numero inteiro: ");
    // lendo o primeiro número inteiro e armazenando na variável num1
    scanf("%d", &num1);
    // solicitando ao usuário que digite o segundo número inteiro
    printf("Digite o segundo numero inteiro: ");
    // lendo o segundo número inteiro e armazenando na variável num2
    scanf("%d", &num2);
    // solicitando ao usuário que digite o terceiro número inteiro
    printf("Digite o terceiro numero inteiro: ");
    // lendo o terceiro número inteiro e armazenando na variável num3
    scanf("%d", &num3);
    
    // calculando a soma dos três números inteiros e armazenando na variável soma
    soma = num1 + num2 + num3;
    
    // imprimindo a soma dos três números inteiros na tela
    printf("A soma dos tres numeros inteiros é: %d\n", soma);
    
    return 0;
}