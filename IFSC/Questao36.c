Questão 42
  
#include <stdio.h>

int main() {
    int n, i, fat = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        fat *= i;
    }
    printf("Fatorial de %d = %d\n", n, fat);
    return 0;
}
