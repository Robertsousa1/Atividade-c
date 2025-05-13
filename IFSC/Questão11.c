// Questão 11
#include <stdio.h>

int main() {
    int n, a1, r, i, soma = 0;
    
    printf("Digite o numero de termos da progressao (n): ");
    scanf("%d", &n);
    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);
    printf("Digite a razao (r): ");
    scanf("%d", &r);

    printf("Os termos da progressao sao:\n");
    for(i = 0; i < n; i++) {
        int termo = a1 + i * r;  // Calcula o termo da progressão
        printf("%d ", termo);
        soma += termo;  // Acumula a soma dos termos
    }
    
    printf("\nSoma dos termos: %d\n", soma);
    return 0;
}
