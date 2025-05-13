// Questão 23
#include <stdio.h>

int main() {
    char sexo, corOlhos, corCabelos;
    int idade;

    while(1) {
        printf("Digite a idade (digite -1 para sair): ");
        scanf("%d", &idade);

        if(idade == -1) break; // Encerra quando a idade for -1

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite a cor dos olhos (A=Azuis, V=Verdes, C=Castanhos): ");
        scanf(" %c", &corOlhos);

        printf("Digite a cor dos cabelos (L=Louros, C=Castanhos, P=Pretos): ");
        scanf(" %c", &corCabelos);

        // Exibe os dados coletados
        printf("Idade: %d, Sexo: %c, Olhos: %c, Cabelos: %c\n", idade, sexo, corOlhos, corCabelos);
    }

    return 0;
}
