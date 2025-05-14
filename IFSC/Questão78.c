// Questão 78 

#include <stdio.h>

int main() {
    int i;
    float a, b, c, temp;

    printf("Digite o valor de I (1-3): ");
    scanf("%d", &i);
    printf("Digite tres valores reais: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("Valores lidos: %.2f, %.2f, %.2f\n", a, b, c);

    if (i == 1) {
        // Ordem crescente
        if (a > b) { temp = a; a = b; b = temp; }
        if (a > c) { temp = a; a = c; c = temp; }
        if (b > c) { temp = b; b = c; c = temp; }
        printf("Ordem crescente: %.2f %.2f %.2f\n", a, b, c);
    } else if (i == 2) {
        // Ordem decrescente
        if (a < b) { temp = a; a = b; b = temp; }
        if (a < c) { temp = a; a = c; c = temp; }
        if (b < c) { temp = b; b = c; c = temp; }
        printf("Ordem decrescente: %.2f %.2f %.2f\n", a, b, c);
    } else if (i == 3) {
        // Maior valor no meio
        if (a > b && a > c)
            printf("%.2f %.2f %.2f\n", b, a, c);
        else if (b > a && b > c)
            printf("%.2f %.2f %.2f\n", a, b, c);
        else
            printf("%.2f %.2f %.2f\n", a, c, b);
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
