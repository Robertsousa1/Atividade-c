// Questão 4
#include <stdio.h>

int main() {
    float chico = 1.50, ze = 1.10; // Alturas iniciais
    int anos = 0;

    // Enquanto Zé não for maior que Chico
    while(ze <= chico) {
        chico += 0.02; // Chico cresce 2cm
        ze += 0.03;    // Zé cresce 3cm
        anos++;        // Conta anos
    }

    // Exibe o número de anos
    printf("Zé será maior que Chico em %d anos.\n", anos);
    return 0;
}
