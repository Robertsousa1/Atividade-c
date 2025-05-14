// Questão 25

#include <stdio.h>

int main() {
    int int1, int2, quociente, resto;

    // Leitura dos valores Int1 e Int2
    printf("Digite o primeiro número (Int1): ");
    scanf("%d", &int1);
    printf("Digite o segundo número (Int2): ");
    scanf("%d", &int2);

    // Cálculo do quociente e resto
    quociente = int1 / int2;
    resto = int1 % int2;

    // Exibição do quociente e resto
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
