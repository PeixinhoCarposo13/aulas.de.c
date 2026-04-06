// if, else e else if
#include <stdio.h>

int main(){
    // declarando a variável idade do tipo inteiro
    int idade;
    
    // aqui solicito ao usuário que digite sua idade.
    printf("Digite sua idade: ");
    // aqui leio a idade digitada pelo usuário e armazeno na variável idade.
    scanf("%d", &idade);
    
    // aqui verifico se a idade é maior ou igual a 18 anos e menor ou igual a 60 anos
    if(idade >= 18 && idade <= 60){
        printf("Voce é adulto.\n");
    // aqui verifico se a idade é maior que 60 anos
    } else if (idade > 60){
        printf("Voce é idoso.\n");
    // se as condições forem falsas, imprimo que o usuário é menor de idade
    } else {
        printf("Voce é menor de idade.\n");
    }
    
    return 0;
}