// Questão 24
#include <stdio.h>

int main() {
    int idade, maiorIdade = 0, mulheresQualificadas = 0;
    char sexo, corOlhos, corCabelos;

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

        // Atualiza a maior idade
        if(idade > maiorIdade) maiorIdade = idade;

        // Verifica as mulheres que atendem os critérios
        if(sexo == 'F' && idade >= 18 && idade <= 35 && corOlhos == 'V' && corCabelos == 'L') {
            mulheresQualificadas++;
        }
    }

    // Exibe os resultados
    printf("Maior idade dos habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres qualificadas: %d\n", mulheresQualificadas);

    return 0;
}
