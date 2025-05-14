// Questão 70 

#include <stdio.h>

int main() {
    int num;

    // Solicita um número
    printf("Digite um numero: ");
    scanf("%d", &num);

    // Verifica se é par
    if (num % 2 == 0)
        printf("Verdadeiro (numero par)\n");
    else
        printf("Falso (numero impar)\n");

    return 0;
}
