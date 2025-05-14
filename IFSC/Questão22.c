// Questão 22

#include <stdio.h>

int main() {
    float val1, val2, media;

    // Leitura dos valores Val1 e Val2
    printf("Digite o primeiro valor: ");
    scanf("%f", &val1);
    printf("Digite o segundo valor: ");
    scanf("%f", &val2);

    // Cálculo da média
    media = (val1 + val2) / 2;

    // Exibição da média
    printf("A média dos valores é: %.2f\n", media);

    return 0;
}
