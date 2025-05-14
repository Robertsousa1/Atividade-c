// Questão 18

#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    // Leitura dos valores de comprimento, largura e altura
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa: ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa: ");
    scanf("%f", &altura);

    // Cálculo do volume da caixa (VOLUME = COMPRIMENTO * LARGURA * ALTURA)
    volume = comprimento * largura * altura;

    // Exibição do volume calculado
    printf("O volume da caixa retangular é: %.2f\n", volume);

    return 0;
}
