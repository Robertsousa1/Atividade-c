Questão 45
  
#include <stdio.h>

int main() {
    int n, i, soma = 0;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    int num;
    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma = %d\n", soma);
    return 0;
}
