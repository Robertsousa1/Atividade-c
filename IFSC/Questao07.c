Questao13

#include <stdio.h>

int main() {
    float F, C;

    // Ler a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    // Calcular Celsius
    C = (F - 32) * 5 / 9;

    // Mostrar o resultado
    printf("Temperatura em Celsius: %.2f\n", C);

    return 0;
}
