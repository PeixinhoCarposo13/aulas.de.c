//Entradas e saidas em C

#include <stdio.h>

int main(){
    FILE *arq; // declaração de um ponteiro para arquivo
    FILE *arq2; // declaração de outro ponteiro para arquivo
    char c; // variável para armazenar cada caractere lido do arquivo
    char frutas[10]; // declaração de um array de caracteres para armazenar o nome das frutas

    // O fopen recebe dois argumentos: o nome do arquivo e o modo de abertura.
    //Os modos de abertura mais comuns são:
    /* "r" - leitura (read): abre o arquivo para leitura. O arquivo deve existir, 
    caso contrário, a abertura falhará.*/
    /* "w" - escrita (write): abre o arquivo para escrita. Se o arquivo já existir, 
    ele será truncado (apagado) e um novo arquivo vazio será criado. Se o arquivo 
    não existir, um novo arquivo será criado.*/
    /* "a" - anexar (append): abre o arquivo para escrita, mas mantém o conteúdo 
    existente. Se o arquivo não existir, um novo arquivo será criado. O conteúdo 
    será adicionado ao final do arquivo, sem apagar o conteúdo existente.*/
    /* "wa" - escrita e anexação: abre o arquivo para escrita e anexação. 
    Se o arquivo não existir, um novo arquivo será criado. 
    O conteúdo será adicionado ao final do arquivo, sem apagar o conteúdo existente.*/
    arq = fopen("arquivo.txt", "w"); // abrindo o arquivo "arquivo.txt" para escrita
    arq2 = fopen("numeros.txt", "w"); // abrindo o arquivo "numeros.txt" para escrita



    // Escrevendo no arquivo usando a função fprintf, que é semelhante à função printf, mas escreve no arquivo em vez de na tela.
    if(arq == NULL) { // verificando se o arquivo foi aberto com sucesso
        printf("Erro ao abrir o arquivo!\n");
        return 1; // retornando um código de erro
    }else{
        printf("Informe uma fruta, ou 0 para sair: \n");
        fgets(frutas, 10, stdin); //stdin = standard input -> entrada padrão
        while(frutas[0] != '0'){
            fputs(frutas, arq);
            printf("Informe uma fruta, ou 0 para sair: \n");
            fgets(frutas, 10, stdin);
        }


    }
    fclose(arq); // fechando o arquivo após a escrita



    //Escrevendo numeros no arquivo usando a função fprintf, que é semelhante à função printf, mas escreve no arquivo em vez de na tela.
    if(arq2 == NULL) { // verificando se o arquivo foi aberto com sucesso
        printf("Erro ao abrir o arquivo!\n");
        return 1; // retornando um código de erro
    }else{
        for(int i = 1; i <= 10; i++) {
            fprintf(arq2, "%d\n", i); // escrevendo os números de 1 a 10 no arquivo, cada número em uma nova linha
        }
    }
    fclose(arq2); // fechando o arquivo após a escrita



    arq = fopen("arquivo.txt", "r"); // abrindo o arquivo "arquivo.txt" para leitura

    if(arq == NULL) { // verificando se o arquivo foi aberto com sucesso
        printf("Erro ao abrir o arquivo!\n");
        return 1; // retornando um código de erro
    }else{
        // Lendo do arquivo usando a função getc, que lê um caractere por vez do arquivo.
        while ((c = getc(arq)) != EOF) { // lendo o arquivo caractere por caractere até o final do arquivo (EOF)
        putchar(c); // imprimindo cada caractere lido na tela
    }
    }

    //Lendo o arquivo dos numeros e somando os numeros usando a função feof.
    arq2 = fopen("numeros.txt", "r"); // abrindo o arquivo
    if(arq2 == NULL) { // verificando se o arquivo foi aberto com sucesso
        printf("Erro ao abrir o arquivo!\n");
        return 1; // retornando um código de erro
    }else{
        int numero, soma = 0; // variáveis para armazenar o número lido e a soma dos números
        while (!feof(arq2)) { // lendo os números do arquivo até o final do arquivo
            fscanf(arq2, "%d", &numero); // lendo um número do arquivo e armazenando na variável numero
                soma += numero; // somando cada número lido à variável soma           
        }
        printf("A soma dos números no arquivo é: %d\n", soma); // imprimindo a soma dos números
    }
    fclose(arq2); // fechando o arquivo
    fclose(arq); // fechando o arquivo


    return 0;
}