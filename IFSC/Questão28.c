// Questão 28

#include <stdio.h>

int main() {
    int n, c, d, u, m;

    // Leitura do número N no formato CDU
    printf("Digite um número de três algarismos (CDU): ");
    scanf("%d", &n);

    // Extração dos algarismos C, D e U
    c = n / 100;         // Centenas
    d = (n / 10) % 10;   // Dezenas
    u = n % 10;          // Unidades

    // Formando o número M com os algarismos invertidos
    m = (u * 100) + (d * 10) + c;

    // Exibição do número M
    printf("O número M com os algarismos invertidos é: %d\n", m);

    return 0;
}
