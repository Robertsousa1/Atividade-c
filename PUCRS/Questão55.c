//Questão 55

#include <stdio.h>

// Função para calcular se o ano é bissexto
int ano_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;  // Ano bissexto
    }
    return 0;  // Ano não bissexto
}

// Função para calcular o número de dias no mês
int dias_no_mes(int mes, int ano) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;  // Meses com 31 dias
        case 4: case 6: case 9: case 11:
            return 30;  // Meses com 30 dias
        case 2:
            return ano_bissexto(ano) ? 29 : 28;  // Fevereiro
        default:
            return 0;
    }
}

// Função para calcular o número total de dias desde 01/01/0000 até a data fornecida
int dias_desde_ano_zero(int dia, int mes, int ano) {
    int dias_totais = 0;

    // Conta os dias de todos os anos passados
    for (int i = 0; i < ano; i++) {
        dias_totais += (ano_bissexto(i)) ? 366 : 365;  // Se o ano for bissexto, tem 366 dias, senão 365
    }

    // Conta os dias de todos os meses passados no ano fornecido
    for (int i = 1; i < mes; i++) {
        dias_totais += dias_no_mes(i, ano);  // Adiciona os dias de cada mês até o mês anterior
    }

    // Conta os dias do mês atual
    dias_totais += dia;

    return dias_totais;
}

int main() {
    int dia1, mes1, ano1, dia2, mes2, ano2;

    // Solicita as duas datas
    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);
    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    // Calcula o número total de dias desde 01/01/0000 para ambas as datas
    int dias1 = dias_desde_ano_zero(dia1, mes1, ano1);
    int dias2 = dias_desde_ano_zero(dia2, mes2, ano2);

    // Calcula a diferença em dias entre as duas datas
    int diferenca = dias2 - dias1;

    // Exibe a diferença em dias
    printf("A diferença entre as duas datas é de %d dias.\n", diferenca);

    return 0;
}
