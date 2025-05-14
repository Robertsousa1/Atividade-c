// Questão 57

#include <stdio.h>

int main() {
    int a, b;

    // Leitura dos dois valores
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    // Verificar se são múltiplos
    if (a % b == 0 || b % a == 0) {
        printf("São múltiplos\n");
    } else {
        printf("Não são múltiplos\n");
    }

    return 0;
}
