// Questão 9
#include <stdio.h>

int main() {
    int i, num, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &num);
    maior = menor = num; // Inicializa maior e menor com o primeiro número

    // Loop para ler 50 números
    for(i = 1; i < 50; i++) {
        printf("Digite outro numero: ");
        scanf("%d", &num);

        // Atualiza o maior e menor valor
        if(num > maior) maior = num;
        if(num < menor) menor = num;
    }

    // Exibe o maior e menor valor
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
