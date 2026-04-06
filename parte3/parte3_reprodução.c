//for, while e do while
#include <stdio.h>

int main(){
    // declarando a variável numero do tipo inteiro
    int numero1, numero2;
    
    // aqui uso o loop for para imprimir os números 5 próximos numeros na tela.
    printf("Sequencia dos 5 próximos numeros usando for:\n");
    printf("insira um numero:\n");
    scanf("%d", &numero1);
    for(int i = 0; i < 5; i++){
        numero1 ++;
        printf("O %dº numero da sequência é: %d\n", i + 1, numero1);
    }
    printf("\n");
    
    // aqui uso o loop while para o inserir numero par.
    printf("Sequencia de validação de numeros pares usando while:\n");
    printf("insira um numero par:\n");
    scanf("%d", &numero2);
    while(1){
        if(numero2 % 2 == 0){
            printf("O numero par inserido é: %d\n", numero2);
            break;
        } else {
            printf("Numero impar! Insira um numero par:\n");
            scanf("%d", &numero2);
        }
    }
    printf("\n");
    
    // aqui uso o loop do while para imprimir os números de 1 a 10 na tela.
    printf("Numeros de 1 a 10 usando do while:\n");
    int z = 1; // resetando o valor de i para 1
    do {
        printf("%d ", z);
        z++;
    } while(z <= 10);
    printf("\n");
    
    return 0;
}