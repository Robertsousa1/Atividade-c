Questão 69
  
#include <stdio.h>

int main() {
    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);
    if(b != 0) {
        printf("Resultado da divisão: %.2f\n", (float)a / b);
    } else {
        printf("Erro! Divisão por zero.\n");
    }
    return 0;
}
