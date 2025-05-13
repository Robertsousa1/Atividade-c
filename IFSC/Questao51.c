Questão 57
  
#include <stdio.h>

int main() {
    int n, i, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        soma += i;
    }
    printf("Soma de 1 a %d = %d\n", n, soma);
    return 0;
}
