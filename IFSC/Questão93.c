// Questão 93 
#include <stdio.h>

int main() {
    unsigned long long graos = 1, total = 1;

    // Começa com 1 grão e dobra a cada casa até a 64ª
    for (int i = 2; i <= 64; i++) {
        graos *= 2;
        total += graos;
    }

    printf("Total de graos: %llu\n", total);
    return 0;
}
