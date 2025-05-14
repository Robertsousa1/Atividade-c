// Questão 72 

#include <stdio.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite o nome do atleta: ");
    scanf("%s", nome);
    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 10)
        printf("Categoria: Infantil\n");
    else if (idade >= 11 && idade <= 15)
        printf("Categoria: Juvenil\n");
    else if (idade >= 16 && idade <= 20)
        printf("Categoria: Junior\n");
    else if (idade >= 21 && idade <= 25)
        printf("Categoria: Profissional\n");
    else
        printf("Idade fora da faixa cadastrada.\n");

    return 0;
}
