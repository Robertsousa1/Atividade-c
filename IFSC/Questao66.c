Questão 72
  
#include <stdio.h>

int main() {
    int senha;
    printf("Digite a senha: ");
    scanf("%d", &senha);
    if(senha == 1234) {
        printf("Acesso permitido.\n");
    } else {
        printf("Acesso negado.\n");
    }
    return 0;
}
