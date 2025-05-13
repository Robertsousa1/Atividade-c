//Questão 42

#include <stdio.h>

int main() {
    int n, H = 0;

    // Solicita um número inteiro e positivo ao usuário
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &n);

    // Calcula a soma de 10 repetido n vezes
    H = n * 10;

    // Exibe o resultado final da soma
    printf("Resultado de H = %d\n", H);

    return 0;
}
