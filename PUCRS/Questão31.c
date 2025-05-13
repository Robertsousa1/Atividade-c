// Questão 31
#include <stdio.h>

int main() {
    int num, dentroIntervalo = 0, foraIntervalo = 0;

    printf("Digite 10 números:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &num);

        if(num >= 10 && num <= 20) {
            dentroIntervalo++; // Conta números dentro do intervalo
        } else {
            foraIntervalo++; // Conta números fora do intervalo
        }
    }

    printf("Valores dentro do intervalo [10,20]: %d\n", dentroIntervalo);
    printf("Valores fora do intervalo [10,20]: %d\n", foraIntervalo);

    return 0;
}
