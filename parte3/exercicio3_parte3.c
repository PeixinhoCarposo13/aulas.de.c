//Faça um programa que leia 10 números e escreva o maior e o menor valor lido.

#include <stdio.h>

int main(){
    int maior, menor, numero;
    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &numero);
        if(i == 0){ // para o primeiro número, inicializo maior e menor com o valor digitado
            maior = numero;
            menor = numero;
        } else {
            if(numero > maior){
                maior = numero; // atualizando o maior número
            }
            if(numero < menor){
                menor = numero; // atualizando o menor número
            }
        }
    }

    printf("O maior valor lido foi: %d\n", maior);
    printf("O menor valor lido foi: %d\n", menor);
    return 0;
}
