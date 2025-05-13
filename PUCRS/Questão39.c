// Questão 39
#include <stdio.h>

int soma_divisores(int num) {
    int soma = 0;
    for(int i = 1; i < num; i++) {
        if(num % i == 0) {
            soma += i; // Soma os divisores de 'num'
        }
    }
    return soma;
}

int main() {
    int num = 2, cont = 0;

    printf("Os primeiros 5 números perfeitos são:\n");

    while(cont < 5) {
        if(soma_divisores(num) == num) {
            printf("%d ", num); // Exibe o número perfeito
            cont++; // Contador para garantir que exiba 5 números perfeitos
        }
        num++;
    }

    printf("\n");
    return 0;
}
