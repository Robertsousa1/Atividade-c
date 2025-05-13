Questão 48
  
#include <stdio.h>

int main() {
    int i, soma = 0;
    for(i = 1; i <= 50; i++) {
        if(i % 2 != 0)
            soma += i;
    }
    printf("Soma dos impares de 1 a 50 = %d\n", soma);
    return 0;
}
