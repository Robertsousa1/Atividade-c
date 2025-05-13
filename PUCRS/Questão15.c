// Questão 15
#include <stdio.h>

int main() {
    int num, intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;

    while(1) {
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &num);

        if(num < 0) break; // Encerra a leitura quando número negativo é digitado

        // Contagem dos intervalos
        if(num >= 0 && num <= 25) intervalo1++;
        else if(num >= 26 && num <= 50) intervalo2++;
        else if(num >= 51 && num <= 75) intervalo3++;
        else if(num >= 76 && num <= 100) intervalo4++;
    }

    // Exibe os resultados
    printf("Intervalo [0-25]: %d\n", intervalo1);
    printf("Intervalo [26-50]: %d\n", intervalo2);
    printf("Intervalo [51-75]: %d\n", intervalo3);
    printf("Intervalo [76-100]: %d\n", intervalo4);

    return 0;
}
