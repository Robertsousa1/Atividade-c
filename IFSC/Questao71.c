Questão 77
  
#include <stdio.h>

int main() {
    char nome[50];
    int idade;
    float salario;
    char sexo, estado_civil;

    do {
        printf("Digite o nome: ");
        scanf("%s", nome);
    } while(strlen(nome) <= 3);

    do {
        printf("Digite a idade: ");
        scanf("%d", &idade);
    } while(idade < 0 || idade > 150);

    do {
        printf("Digite o salario: ");
        scanf("%f", &salario);
    } while(salario <= 0);

    do {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
    } while(sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f');

    do {
        printf("Digite o estado civil (s/c/v/d): ");
        scanf(" %c", &estado_civil);
    } while(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd');

    printf("Cadastro concluído.\n");
    return 0;
}
