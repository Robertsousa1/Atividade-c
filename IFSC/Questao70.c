Questão 76
  
#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &numero);
    while(numero < 1 || numero > 10) {
        printf("Valor inválido. Digite novamente: ");
        scanf("%d", &numero);
    }
    printf("Valor aceito: %d\n", numero);
    return 0;
}
