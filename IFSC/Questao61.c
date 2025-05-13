Questão 67
  
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite três numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < b && a < c) {
        printf("O menor numero é: %d\n", a);
    } else if(b < a && b < c) {
        printf("O menor numero é: %d\n", b);
    } else {
        printf("O menor numero é: %d\n", c);
    }
    return 0;
}
