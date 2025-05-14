// Questão 91 

#include <stdio.h>

int main() {
    int soma = 0;

    // Percorre e imprime pares de 85 a 907
    for (int i = 86; i <= 906; i += 2) {
        printf("%d ", i);
        soma += i;
    }

    printf("\nSoma dos pares: %d\n", soma);
    return 0;
}
