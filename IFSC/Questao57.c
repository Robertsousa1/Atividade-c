Questão 63
  
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n % 2 == 0) {
        printf("O numero %d é par.\n", n);
    } else {
        printf("O numero %d é impar.\n", n);
    }
    return 0;
}
