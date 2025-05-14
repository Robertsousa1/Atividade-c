// Questão 9

#include <stdio.h>
#include <string.h>  // Biblioteca para manipulação de strings

int main() {
    char nome[50], sobrenome[50], nomeCompleto[100];

    // Leitura do nome e sobrenome
    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = 0;  // Remove o '\n' gerado pelo fgets

    printf("Digite o sobrenome: ");
    fgets(sobrenome, sizeof(sobrenome), stdin);
    sobrenome[strcspn(sobrenome, "\n")] = 0;  // Remove o '\n' gerado pelo fgets

    // Concatenar o nome e sobrenome
    strcpy(nomeCompleto, nome);  // Copia o nome para nomeCompleto
    strcat(nomeCompleto, " ");   // Adiciona um espaço entre nome e sobrenome
    strcat(nomeCompleto, sobrenome);  // Adiciona o sobrenome

    // Exibição do nome completo
    printf("Nome completo: %s\n", nomeCompleto);

    return 0;
}
