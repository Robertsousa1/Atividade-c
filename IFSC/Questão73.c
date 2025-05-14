// Questão 73 

#include <stdio.h>
#include <math.h>

int main() {
    float numero;
    int opcao;

    printf("Digite um numero real: ");
    scanf("%f", &numero);

    printf("Escolha uma opcao:\n");
    printf("101 - Raiz quadrada\n");
    printf("102 - Metade\n");
    printf("103 - 10%% do numero\n");
    printf("104 - Dobro\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 101:
            printf("Raiz quadrada: %.2f\n", sqrt(numero));
            break;
        case 102:
            printf("Metade: %.2f\n", numero / 2);
            break;
        case 103:
            printf("10%%: %.2f\n", numero * 0.10);
            break;
        case 104:
            printf("Dobro: %.2f\n", numero * 2);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
