// Questão 77 

#include <stdio.h>

int main() {
    int mes, ano, dias;

    printf("Digite o mes (1-12): ");
    scanf("%d", &mes);
    printf("Digite o ano: ");
    scanf("%d", &ano);

    if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
            dias = 29;
        else
            dias = 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        dias = 30;
    else
        dias = 31;

    printf("Numero de dias: %d\n", dias);
    return 0;
}
