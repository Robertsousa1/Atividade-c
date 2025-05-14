// Questão 27

#include <stdio.h>

int main() {
    int codigo, a, b, c, d, e, digitoV;

    // Leitura do código de 5 algarismos
    printf("Digite o código de 5 algarismos: ");
    scanf("%d", &codigo);

    // Extração dos algarismos A, B, C, D e E
    a = codigo / 10000;
    b = (codigo / 1000) % 10;
    c = (codigo / 100) % 10;
    d = (codigo / 10) % 10;
    e = codigo % 10;

    // Cálculo do dígito verificador
    int S = 6 * a + 5 * b + 4 * c + 3 * d + 2 * e;
    digitoV = S % 7;

    // Exibição do dígito verificador
    printf("O dígito verificador é: %d\n", digitoV);

    return 0;
}
