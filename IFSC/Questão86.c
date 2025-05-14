// Questão 86 

#include <stdio.h>

int main() {
    int mes;

    // Solicita o mês
    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);

    // Mostra a estação correspondente
    printf("A estacao do ano correspondente ao mes %d e: ", mes);

    switch (mes) {
        case 1:
        case 2:
        case 3:
            printf("Verao\n");
            break;
        case 4:
        case 5:
        case 6:
            printf("Outono\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Inverno\n");
            break;
        case 10:
        case 11:
        case 12:
            printf("Primavera\n");
            break;
        default:
            printf("Mes invalido.\n");
    }

    return 0;
}
