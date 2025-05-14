// Questão 52

#include <stdio.h>

int main() {
    int a, b;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);

    // Verificar se são iguais ou diferentes
    if (a == b) {
        printf("Os números são iguais.\n");
    } else {
        printf("Os números são diferentes.\n");
        // Mostrar o maior e o menor
        if (a > b) {
            printf("Maior: %d\n", a);
            printf("Menor: %d\n", b);
        } else {
            printf("Maior: %d\n", b);
            printf("Menor: %d\n", a);
        }
    }

    return 0;
}
