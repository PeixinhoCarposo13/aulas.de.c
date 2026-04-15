// time.h

/*
A biblioteca time.h em C fornece funções
para trabalhar com tempo e datas, como
obter o horário atual, medir tempo de
execução e manipular datas.
*/

/*
Obter data e hora atual
time(NULL) → retorna o tempo atual (em segundos desde 1970)
localtime() → converte para data legível
*/

/*
Trabalhar com data formatada
struct tm → estrutura com dia, mês, ano, hora
localtime() → converte tempo para essa estrutura
*/

/*
Medir tempo de execução
clock() → mede tempo gasto pelo programa
*/

/*
Usado com stdlib.h para gerar números aleatórios
Muito comum usar com rand():

srand(time(NULL)) → gera números aleatórios diferentes a cada execução
*/

#include <stdio.h>
#include <time.h>

int main()
{
  time_t t;
  // estrutura para data e hora
  struct tm *data;

  // pega o tempo atual
  t = time(NULL);

  // converte para formato legível
  data = localtime(&t);

  // exibe data e hora
  // tm_mday → dia do mês
  // tm_mon → mês (0-11, então +1)
  // tm_year → anos desde 1900, então +1900
  printf("Data: %02d/%02d/%d\n", data->tm_mday, data->tm_mon + 1, data->tm_year + 1900);

  // tm_hour → hora
  // tm_min → minuto
  // tm_sec → segundo
  printf("Hora: %02d:%02d:%02d\n", data->tm_hour, data->tm_min, data->tm_sec);

  return 0;
}