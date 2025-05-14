// Questão 39

#include <stdio.h>

int main() {
    int valorCompra, valorPago, troco;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    // Leitura do valor da compra e do valor pago
    printf("Digite o valor da compra: R$ ");
    scanf("%d", &valorCompra);
    printf("Digite o valor pago: R$ ");
    scanf("%d", &valorPago);

    // Cálculo do troco
    troco = valorPago - valorCompra;

    // Inicialização das variáveis de notas
    nota100 = troco / 100;
    troco = troco % 100;
    nota50 = troco / 50;
    troco = troco % 50;
    nota20 = troco / 20;
    troco = troco % 20;
    nota10 = troco / 10;
    troco = troco % 10;
    nota5 = troco / 5;
    troco = troco % 5;
    nota2 = troco / 2;
    troco = troco % 2;
    nota1 = troco / 1;

    // Exibição dos resultados
    printf("Valor da compra: R$ %d\n", valorCompra);
    printf("Valor pago: R$ %d\n", valorPago);
    printf("Troco: R$ %d\n", valorPago - valorCompra);

    printf("Notas de 100: %d\n", nota100);
    printf("Notas de 50: %d\n", nota50);
    printf("Notas de 20: %d\n", nota20);
    printf("Notas de 10: %d\n", nota10);
    printf("Notas de 5: %d\n", nota5);
    printf("Notas de 2: %d\n", nota2);
    printf("Notas de 1: %d\n", nota1);

    return 0;
}
