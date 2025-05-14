// Questão 14

#include <stdio.h>

// Definindo o valor de PI como uma constante
#define PI 3.14159

int main() {
    float volume, raio, altura;

    // Leitura do raio e altura da lata de óleo
    printf("Digite o valor do raio da lata de óleo: ");
    scanf("%f", &raio);
    printf("Digite o valor da altura da lata de óleo: ");
    scanf("%f", &altura);

    // Cálculo do volume da lata de óleo (V = π * r² * h)
    volume = PI * raio * raio * altura;

    // Exibição do volume da lata de óleo
    printf("O volume da lata de óleo é: %.2f\n", volume);

    return 0;
}
