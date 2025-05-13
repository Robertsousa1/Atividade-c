// Questão 32
#include <stdio.h>

int main() {
    int a, b;

    printf("Digite 5 pares de valores a e b (a < b):\n");

    for(int i = 0; i < 5; i++) {
        scanf("%d %d", &a, &b);

        if(a % 2 != 0) a++; // Garante que a seja par

        for(int j = a; j <= b; j += 2) {
            printf("%d ", j); // Exibe os números pares entre a e b
        }

        printf("\n");
    }

    return 0;
}
