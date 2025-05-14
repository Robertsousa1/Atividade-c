// Questão 19

#include <stdio.h>

int main() {
    int numero;

    // Leitura do valor inteiro
    printf("Digite um valor inteiro: ");
    scanf("%d", &numero);

    // Cálculo e exibição do quadrado e cubo do número
    printf("Quadrado do valor: %d\n", numero * numero);
    printf("Cubo do valor: %d\n", numero * numero * numero);

    return 0;
}
