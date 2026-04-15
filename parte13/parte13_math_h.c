// math.h

/*
A biblioteca math.h em C fornece funções
matemáticas prontas para uso, principalmente
para operações mais avançadas que não
existem nos operadores básicos (+, -, *, /).
*/

/*
-Funções trigonométricas
sin(x) → seno
cos(x) → cosseno
tan(x) → tangente

Usa radianos, não graus!
*/

/*
-Logaritmos e exponenciais
log(x) → log natural (base e)
log10(x) → log base 10
exp(x) → eˣ
*/

/*
-Arredondamentos e valor absoluto
ceil(x) → arredonda para cima
floor(x) → arredonda para baixo
round(x) → arredonda normalmente
fabs(x) → valor absoluto
*/

#include <stdio.h>
#include <math.h>

int main()
{
  double x = 9.0, y = 2.0;

  // 🔹 Potência e raiz
  printf("Potencia: %.2f\n", pow(x, y));    // 9^2
  printf("Raiz quadrada: %.2f\n", sqrt(x)); // √9

  // 🔹 Trigonometria (em radianos)
  printf("Seno: %.2f\n", sin(x));
  printf("Cosseno: %.2f\n", cos(x));

  // 🔹 Logaritmo e exponencial
  printf("Log natural: %.2f\n", log(x));
  printf("Exponencial: %.2f\n", exp(y));

  // 🔹 Arredondamentos
  double num = 3.7;
  printf("Ceil: %.2f\n", ceil(num));   // para cima
  printf("Floor: %.2f\n", floor(num)); // para baixo
  printf("Round: %.2f\n", round(num)); // normal

  // 🔹 Valor absoluto
  printf("Valor absoluto: %.2f\n", fabs(-x));

  return 0;
}