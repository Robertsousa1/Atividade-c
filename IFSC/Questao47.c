Questão 53
  
#include <stdio.h>

int main() {
    int n, i, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 2 != 0) {
            soma += i;
        }
    }
    printf("Soma dos impares de 1 a %d = %d\n", n, soma);
    return 0;
}
