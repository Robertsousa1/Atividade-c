Questao14

#include <stdio.h>

int main() {
    float raio, altura, volume;

    // Ler o raio
    printf("Digite o raio da lata: ");
    scanf("%f", &raio);

    // Ler a altura
    printf("Digite a altura da lata: ");
    scanf("%f", &altura);

    // Calcular o volume
    volume = 3.14159 * raio * raio * altura;

    // Mostrar o volume
    printf("Volume da lata: %.2f\n", volume);

    return 0;
}
