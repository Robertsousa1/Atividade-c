"Questao 5"
#include <stdio.h>

int main() {
    int valor, soma = 0, quantidade = 0;

    printf("Digite um valor positivo (negativo para encerrar): ");
    scanf("%d", &valor);

    while(valor >= 0) {
        soma += valor;
        quantidade++;

        printf("Digite um valor positivo (negativo para encerrar): ");
        scanf("%d", &valor);
    }

    if(quantidade > 0) {
        printf("Media aritmetica: %.2f\n", (float)soma / quantidade);
    } else {
        printf("Nenhum valor valido foi inserido.\n");
    }

    return 0;
}
