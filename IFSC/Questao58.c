Questão 64

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n > 0) {
        printf("O numero %d é positivo.\n", n);
    } else if(n < 0) {
        printf("O numero %d é negativo.\n", n);
    } else {
        printf("O numero é zero.\n");
    }
    return 0;
}
