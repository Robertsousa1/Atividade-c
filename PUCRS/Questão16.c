// Questão 16
#include <stdio.h>
#include <math.h>

int main() {
    int num, count = 0;

    // Laço para ler os valores e exibir a tabela
    while(1) {
        printf("Digite um numero (digite 0 para sair): ");
        scanf("%d", &num);

        if(num == 0) break; // Encerra a leitura quando 0 é digitado

        // Cabeçalho da tabela a cada 20 linhas
        if(count % 20 == 0) {
            printf("\nValor\tQuadrado\tCubo\tRaiz Quadrada\n");
            printf("--------------------------------------------\n");
        }

        // Exibe o valor, seu quadrado, cubo e raiz quadrada
        printf("%d\t%d\t\t%d\t%.2f\n", num, num * num, num * num * num, sqrt(num));

        count++;
    }

    return 0;
}
