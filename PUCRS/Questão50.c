//Questão 50

#include <stdio.h>

int main() {
    int x, y, resultado = 1;

    // Solicita os valores de X e Y
    printf("Digite o valor de X (base): ");
    scanf("%d", &x);
    printf("Digite o valor de Y (expoente): ");
    scanf("%d", &y);

    // Calcula X^Y
    for(int i = 0; i < y; i++) {
        resultado *= x;
    }

    // Exibe o resultado de X^Y
    printf("%d^%d = %d\n", x, y, resultado);
    return 0;
}
