//dados em C
#include <stdio.h>

int main(){
    //Tipos numericos
    int numero_inteiro = 10; // tipo inteiro - %d
    float numero_decimal = 3.14; // tipo float - %f
    double numero_decimal_preciso = 3.1415926535; // tipo double - %lf
    long numero_grande = 1234567890; // tipo long - %ld

    //Tipo alfanumericos
    char letra = 'A'; // tipo char - %c
    char palavra[20] = "Hello, World!"; // tipo string (array de char) - %s

    //Tipos booleanos
    _Bool valor_verdade = 1; // tipo booleano - %d (1 para verdadeiro, 0 para falso)
    _Bool valor_falso = 0; // tipo booleano - %d (1 para verdadeiro, 0 para falso)

    //Operações matemáticas
    int soma = numero_inteiro + 5; // adição
    int subtracao = numero_inteiro - 3; // subtração
    float multiplicacao = numero_decimal * 2; // multiplicação
    double divisao = numero_decimal_preciso / 2; // divisão
    float quadrado = numero_decimal * numero_decimal; // exponenciação (quadrado)
    int resto = numero_inteiro % 3; // módulo (resto da divisão)
    

    return 0;
}