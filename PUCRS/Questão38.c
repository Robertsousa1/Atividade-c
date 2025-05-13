// Questão 38
#include <stdio.h>

int is_primo(int num) {
    if(num <= 1) return 0;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int produto = 1;

    for(int i = 92; i <= 1478; i++) {
        if(is_primo(i)) {
            produto *= i; // Multiplica os números primos
        }
    }

    printf("Produto dos números primos entre 92 e 1478: %d\n", produto);
    return 0;
}
