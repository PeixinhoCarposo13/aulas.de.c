/*Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido 
proporcionalmente ao valor que cada um deu para a realização da aposta. 
Faça um programa que leia quanto cada apostador apostou, o valor do prêmio e 
imprima quanto cada um ganharia do prêmio com base no valor investido.*/

#include <stdio.h>

int main(){
    // valor do prêmio
    float premio = 1000000.00;
    // declarando as variáveis do tipo ponto flutuante
    float aposta1, aposta2, aposta3;
    // soma das apostas dos três amigos
    float soma_apostas;
    // declarando a variável de porcentagem do tipo ponto flutuante
    float porcentagem1, porcentagem2, porcentagem3;
    // declarando as variáveis ganho1, ganho2 e ganho3 do tipo ponto flutuante
    float ganho1, ganho2, ganho3;
    
    // aqui solicito ao usuário que digite o valor apostado pelo primeiro amigo.
    printf("Digite o valor apostado pelo primeiro amigo: ");
    // aqui leio o valor digitado pelo usuário e armazeno na variável aposta1.
    scanf("%f", &aposta1);
    
    // aqui solicito ao usuário que digite o valor apostado pelo segundo amigo.
    printf("Digite o valor apostado pelo segundo amigo: ");
    // aqui leio o valor digitado pelo usuário e armazeno na variável aposta2.
    scanf("%f", &aposta2);
    
    // aqui solicito ao usuário que digite o valor apostado pelo terceiro amigo.
    printf("Digite o valor apostado pelo terceiro amigo: ");
    // aqui leio o valor digitado pelo usuário e armazeno na variável aposta3.
    scanf("%f", &aposta3);

    // calculando a soma das apostas dos três amigos
    soma_apostas = aposta1 + aposta2 + aposta3;
    
    //calculando a porcentagem do valor apostado por cada amigo em relação ao total apostado.
    porcentagem1 = (aposta1 / soma_apostas);
    porcentagem2 = (aposta2 / soma_apostas);
    porcentagem3 = (aposta3 / soma_apostas);
    
    // calculando os ganhos de cada amigo com base no valor investido
    ganho1 = porcentagem1 * premio;
    ganho2 = porcentagem2 * premio;
    ganho3 = porcentagem3 * premio;
    
    // aqui imprimo quanto cada amigo ganharia do prêmio com base no valor investido na tela.
    printf("O primeiro amigo ganharia R$ %.2f\n", ganho1);
    printf("O segundo amigo ganharia R$ %.2f\n", ganho2);
    printf("O terceiro amigo ganharia R$ %.2f\n", ganho3);
    
    return 0;
}