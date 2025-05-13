//Questão 52

#include <stdio.h>

int fatorial(int n) {
    int fatorial = 1;
    for(int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int n, p;
    int c, a;

    // Solicita os valores de N e P
    printf("Digite o valor de N (tamanho do conjunto): ");
    scanf("%d", &n);
    printf("Digite o valor de P (tamanho do subconjunto): ");
    scanf("%d", &p);

    // Calcula a combinação C(n, p) = n! / (p! * (n - p)!)
    c = fatorial(n) / (fatorial(p) * fatorial(n - p));
    // Calcula o arranjo A(n, p) = n! / (n - p)!
    a = fatorial(n) / fatorial(n - p);

    // Exibe os resultados da combinação e do arranjo
    printf("Combinação C(%d, %d) = %d\n", n, p, c);
    printf("Arranjo A(%d, %d) = %d\n", n, p, a);

    return 0;
}
