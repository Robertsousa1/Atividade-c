// Questão 6
#include <stdio.h>

int main() {
    int voto, c1 = 0, c2 = 0, c3 = 0, c4 = 0, nulo = 0, branco = 0;

    // Loop até que o código 0 seja inserido
    while(1) {
        printf("Digite o codigo do voto (0 para encerrar): ");
        scanf("%d", &voto);

        if(voto == 0) break; // Encerra o loop

        // Conta votos conforme o código
        switch(voto) {
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: nulo++; break;
            case 6: branco++; break;
            default: printf("Codigo invalido.\n"); break;
        }
    }

    // Exibe o total de votos por categoria
    printf("Candidato 1: %d votos\n", c1);
    printf("Candidato 2: %d votos\n", c2);
    printf("Candidato 3: %d votos\n", c3);
    printf("Candidato 4: %d votos\n", c4);
    printf("Votos nulos: %d\n", nulo);
    printf("Votos em branco: %d\n", branco);

    return 0;
}
