//Questão 54

#include <stdio.h>

int main() {
    int x, y;
    float p1, p2, p3;

    // Solicita os valores de X e Y
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);

    // Verifica se os extremos são diferentes
    if (x == y) {
        printf("Os valores não podem ser iguais.\n");
        return 1;
    }

    // Ordena X e Y
    if (x > y) {
        int temp = x;
        x = y;
        y = temp;
    }

    // Divide o intervalo entre X e Y em 3 partes iguais
    p1 = x + (y - x) / 3.0;
    p2 = x + 2 * (y - x) / 3.0;
    p3 = y;

    printf("Divisão do intervalo: %.2f, %.2f, %.2f\n", p1, p2, p3);
    return 0;
}
