Questao18

#include <stdio.h>

int main() {
    float comprimento, largura, altura, volume;

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume = comprimento * largura * altura;

    printf("Volume da caixa: %.2f\n", volume);

    return 0;
}
