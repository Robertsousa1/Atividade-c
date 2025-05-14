// Questão 83 
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    // Menu de operações
    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    scanf("%d", &opcao);

    // Lê os números
    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    // Executa a operação escolhida
    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
