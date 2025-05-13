Questao9

#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];
    char sobrenome[50];
    char nome_completo[100];

    // a) Ler o nome
    printf("Digite o nome: ");
    scanf("%s", nome);

    // b) Ler o sobrenome
    printf("Digite o sobrenome: ");
    scanf("%s", sobrenome);

    // c) Concatenar nome com sobrenome
    strcpy(nome_completo, nome);      // copia o nome para nome_completo
    strcat(nome_completo, " ");       // adiciona um espaço
    strcat(nome_completo, sobrenome); // adiciona o sobrenome

    // d) Mostrar o nome completo
    printf("Nome completo: %s\n", nome_completo);

    return 0;
}

