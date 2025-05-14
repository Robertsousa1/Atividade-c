// Questão 66 - Maior e menor número
#include <stdio.h>

int main() {
    int a, b;

    // Solicita dois números
    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    // Compara e mostra qual é o maior e o menor
    if (a > b)
        printf("Maior: %d\nMenor: %d\n", a, b);
    else
        printf("Maior: %d\nMenor: %d\n", b, a);

    return 0;
}
