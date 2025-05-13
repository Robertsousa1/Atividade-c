// Questão 27
#include <stdio.h>

int main() {
    int num, maior, menor;
    float soma = 0;

    printf("Digite 500 valores inteiros positivos:\n");

    // Inicializa as variáveis maior e menor com valores extremos
    maior = -1;
    menor = 9999999;

    for(int i = 0; i < 500; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &num);

        // Atualiza a soma total
        soma += num;

        // Atualiza o maior e o menor valor
        if(num > maior) maior = num;
        if(num < menor) menor = num;
    }

    // Exibe os resultados
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", soma / 500);

    return 0;
}
