// Questão 37

#include <stdio.h>

int main() {
    int anos, dias;

    // Leitura do número de anos
    printf("Digite a quantidade de anos que você viveu: ");
    scanf("%d", &anos);

    // Cálculo do número de dias
    dias = anos * 365;

    // Exibição dos dias vividos
    printf("Você viveu aproximadamente %d dias.\n", dias);

    return 0;
}
