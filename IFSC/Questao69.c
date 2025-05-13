Questão 75
  
#include <stdio.h>

int main() {
    int nota;
    printf("Digite a nota (0 a 10): ");
    scanf("%d", &nota);
    if(nota >= 0 && nota <= 10) {
        printf("Nota válida.\n");
    } else {
        printf("Nota inválida.\n");
    }
    return 0;
}
