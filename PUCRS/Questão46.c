Questão 46

#include <stdio.h>
#include <string.h>

int main() {
    char sexo, olhos, cabelos;
    int idade, maiorIdade = 0, count = 0, countFeminino = 0;
    int idadeFeminino18a35 = 0;
    
    // Laço para coletar dados de 500 pessoas
    for(int i = 0; i < 500; i++) {
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("Digite a cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): ");
        scanf(" %c", &olhos);
        printf("Digite a cor dos cabelos (L - Louros, C - Castanhos, P - Pretos): ");
        scanf(" %c", &cabelos);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        // Verifica a maior idade
        if(idade > maiorIdade) {
            maiorIdade = idade;
        }

        // Conta as mulheres entre 18 e 35 anos com olhos verdes e cabelos louros
        if(sexo == 'F' && idade >= 18 && idade <= 35 && olhos == 'V' && cabelos == 'L') {
            countFeminino++;
        }

        // Conta a quantidade de mulheres entre 18 e 35 anos
        if(sexo == 'F' && idade >= 18 && idade <= 35) {
            idadeFeminino18a35++;
        }

        count++;
    }

    // Exibe a maior idade e a quantidade de mulheres com as características específicas
    printf("Maior idade do grupo: %d\n", maiorIdade);
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos verdes e cabelos louros: %d\n", countFeminino);

    return 0;
}
