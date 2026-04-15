//ctype.h

/*
A biblioteca ctype.h em C fornece funções 
para testar e manipular caracteres — 
principalmente úteis quando você trabalha 
com texto (letras, números, espaços, etc.).
*/

/*
Verificar tipos de caracteres
Permite identificar o que um caractere é:

isalpha(c) → verifica se é letra
isdigit(c) → verifica se é número
isalnum(c) → letra ou número
isspace(c) → espaço, tab, enter
islower(c) → letra minúscula
isupper(c) → letra maiúscula
*/

/*
Converter caracteres
Permite mudar letras:

toupper(c) → converte para maiúscula
tolower(c) → converte para minúscula
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    if (isdigit(c)) {
        printf("E numero\n");
    } else if (isalpha(c)) {
        if(isupper(c)) {
            printf("E letra maiuscula\n");
        } else {
            printf("E letra minuscula\n");
        }
    } else {
        printf("Outro tipo\n");
    }

    return 0;
}