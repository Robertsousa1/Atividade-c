// Questão 49

#include <stdio.h>

int main() {
    int x, y, z;

    // Leitura dos valores dos lados
    printf("Digite o primeiro lado: ");
    scanf("%d", &x);
    printf("Digite o segundo lado: ");
    scanf("%d", &y);
    printf("Digite o terceiro lado: ");
    scanf("%d", &z);

    // Verificar se pode ser um triângulo
    if (x + y > z && x + z > y && y + z > x) {
        // Verificar o tipo de triângulo
        if (x == y && y == z) {
            printf("Triângulo Equilátero\n");
        } else if (x == y || y == z || x == z) {
            printf("Triângulo Isóscele\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Os lados não formam um triângulo\n");
    }

    return 0;
}
