//ponteiros
/*Um ponteiro é uma variável que armazena o endereço de memória de outra variável. 
Ele permite acessar e manipular o valor da variável a partir do seu endereço. 
No exemplo abaixo, declaramos um ponteiro para inteiro e atribuímos o endereço de uma variável 
do tipo inteiro a ele. Em seguida, usamos o ponteiro para acessar o valor da variável e imprimir 
tanto o valor quanto o endereço.*/
#include <stdio.h>

int main() {
    int valor = 10; // variável do tipo inteiro
    int *ponteiro; // declaração de um ponteiro para inteiro

    //arrays
    // O ponteiro de um array aponta para o primeiro elemento do array, ou seja, vetor[0].
    int vetor[5] = {1, 2, 3, 4, 5}; // declaração de um array de inteiros
    int *ponteiroVetor = vetor; // atribuindo o endereço do primeiro elemento do array ao ponteiro


    ponteiro = &valor; // atribuindo o endereço da variável 'valor' ao ponteiro

    printf("Valor: %d\n", valor); // imprime o valor da variável
    printf("Endereço de valor: %p\n", (void*)&valor); // imprime o endereço da variável
    printf("Valor através do ponteiro: %d\n", *ponteiro); // imprime o valor usando o ponteiro
    printf("Endereço armazenado no ponteiro: %p\n", (void*)ponteiro); // imprime o endereço armazenado no ponteiro

    // Acessando o endereço e o valor do array usando o ponteiro
    printf("Valor do primeiro elemento do array: %d\n", *ponteiroVetor); // imprime o valor do primeiro elemento do array
    printf("Endereço do primeiro elemento do array: %p\n", (void*)ponteiroVetor); // imprime o endereço do primeiro elemento do array
    



    return 0;
}