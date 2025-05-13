Questão 73
  
#include <stdio.h>

int main() {
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    switch(codigo) {
        case 1:
            printf("Produto: Parafuso\n");
            break;
        case 2:
            printf("Produto: Porca\n");
            break;
        case 3:
            printf("Produto: Prego\n");
            break;
        default:
            printf("Produto não encontrado.\n");
    }
    return 0;
}
