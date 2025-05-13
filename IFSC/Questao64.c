Questão 70
  
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n % 3 == 0 && n % 5 == 0) {
        printf("O numero é divisível por 3 e 5.\n");
    } else {
        printf("O numero não é divisível por 3 e 5.\n");
    }
    return 0;
}
