// Questão 81 

#include <stdio.h>

int main() {
    char letra;

    // Lê uma letra
    printf("Digite uma letra do alfabeto: ");
    scanf(" %c", &letra);

    // Verifica se é vogal ou consoante
    if (letra == 'a' || letra == 'A' ||
        letra == 'e' || letra == 'E' ||
        letra == 'i' || letra == 'I' ||
        letra == 'o' || letra == 'O' ||
        letra == 'u' || letra == 'U') {
        printf("A letra e uma vogal.\n");
    } else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        printf("A letra e uma consoante.\n");
    } else {
        printf("Caractere invalido.\n");
    }

    return 0;
}
