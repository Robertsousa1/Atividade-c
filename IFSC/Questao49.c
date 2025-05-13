Questão 55

#include <stdio.h>

int main() {
    int n, i, mult = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) {
        mult = n * i;
        printf("%d x %d = %d\n", n, i, mult);
    }
    return 0;
}
