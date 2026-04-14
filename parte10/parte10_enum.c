//Usando enum

#include <stdio.h>

/*
usamos enum para criar um tipo de dado que pode assumir 
um conjunto de valores pré-definidos, ou seja, é uma forma 
de criar um tipo de dado personalizado.
No exemplo acima, criamos um tipo de dado chamado "dias_da_semana" 
que pode assumir os valores "domingo", "segunda", "terca", "quarta", "quinta", "sexta" e "sabado".
Dessa forma, podemos usar o tipo de dado "dias_da_semana" para 
declarar variáveis que só podem assumir esses valores pré-definidos, 
o que torna o código mais legível e fácil de entender.
*/

/*
Nesse caso, 0 é igual a domingo, 
1 é igual a segunda, 
2 é igual a terca, 
3 é igual a quarta, 
4 é igual a quinta, 
5 é igual a sexta 
e 6 é igual a sabado.
*/
enum dias_da_semana
{
  domingo,
  segunda,
  terca,
  quarta,
  quinta,
  sexta,
  sabado
};

int main()
{
  enum dias_da_semana dia;

  printf("Informe o dia da semana (0 - domingo, 1 - segunda, 2 - terca, 3 - quarta, 4 - quinta, 5 - sexta, 6 - sabado): ");
  scanf("%d", &dia);

  switch(dia)
  {
    case domingo:
      printf("Hoje é domingo");
      break;
    case segunda:
      printf("Hoje é segunda");
      break;
    case terca:
      printf("Hoje é terca");
      break;
    case quarta:
      printf("Hoje é quarta");
      break;
    case quinta:
      printf("Hoje é quinta");
      break;
    case sexta:
      printf("Hoje é sexta");
      break;
    case sabado:
      printf("Hoje é sabado");
      break;
    default:
      printf("Dia inválido");
  }

  return 0;
}