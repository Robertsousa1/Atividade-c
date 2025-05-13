Questão 71

#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n % 3 == 0) {
        printf("O numero é divisível por 3.\n");
    } else if(n % 5 == 0) {
        printf("O numero é divisível por 5.\n");
    } else {
        printf("O numero não é divisível por 3 nem por 5.\n");
    }
    return 0;
}
