//Questão 53

#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int count = 3, num = 4;
    printf("Primeiros 20 números primos: 1, 2, 3\n");

    // Calcula os 20 primeiros números primos
    while (count < 20) {
        if (ehPrimo(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}
