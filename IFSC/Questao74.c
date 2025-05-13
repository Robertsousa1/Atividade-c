Questão 80

#include <stdio.h>

int main() {
    int i, soma = 0;
    for(i = 1; i <= 100; i++) {
        soma += i;
    }
    printf("Soma dos numeros de 1 a 100: %d\n", soma);
    return 0;
}
