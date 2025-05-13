Questão 36
  
#include <stdio.h>
int main() {
 int numero;
 printf("Digite um número: ");
 scanf("%d", &numero);
 if (numero > 0)
 printf("Positivo");
 else if (numero < 0)
 printf("Negativo");
 else
 printf("Zero");
 return 0;
}
