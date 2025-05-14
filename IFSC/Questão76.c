// Questão 76 

#include <stdio.h>

int main() {
    int data, dia, mes;

    printf("Digite a data no formato DDMMAAAA: ");
    scanf("%d", &data);

    dia = data / 1000000;
    mes = (data / 10000) % 100;

    if ((mes == 12 && dia >= 21) || (mes == 1) || (mes == 2) || (mes == 3 && dia < 21))
        printf("Estacao: Verao\n");
    else if ((mes == 3 && dia >= 21) || (mes == 4) || (mes == 5) || (mes == 6 && dia < 21))
        printf("Estacao: Outono\n");
    else if ((mes == 6 && dia >= 21) || (mes == 7) || (mes == 8) || (mes == 9 && dia < 23))
        printf("Estacao: Inverno\n");
    else
        printf("Estacao: Primavera\n");

    return 0;
}
