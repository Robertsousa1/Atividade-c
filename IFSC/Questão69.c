// Questão 69 

#include <stdio.h>

int main() {
    int dia, mes;

    // Solicita a data de nascimento
    printf("Digite o dia e o mes do aniversario: ");
    scanf("%d %d", &dia, &mes);

    // Verifica o signo com base na data
    if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19))
        printf("Você é do seguinte signo do zodíaco: Aquário\n");
    else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
        printf("Peixes\n");
    else if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
        printf("Áries\n");
    else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 20))
        printf("Touro\n");
    else if ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        printf("Gêmeos\n");
    else if ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 21))
        printf("Câncer\n");
    else if ((mes == 7 && dia >= 22) || (mes == 8 && dia <= 22))
        printf("Leão\n");
    else if ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        printf("Virgem\n");
    else if ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Libra\n");
    else if ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Escorpião\n");
    else if ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Sagitário\n");
    else
        printf("Capricórnio\n");

    return 0;
}
