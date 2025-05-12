"Questao 6"
#include <stdio.h>

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int nulo = 0, branco = 0;

    printf("Digite o codigo do voto (1-4=candidatos, 5=nulo, 6=branco, 0=finalizar): ");
    scanf("%d", &voto);

    while(voto != 0) {
        if(voto == 1) {
            candidato1++;
        } else if(voto == 2) {
            candidato2++;
        } else if(voto == 3) {
            candidato3++;
        } else if(voto == 4) {
            candidato4++;
        } else if(voto == 5) {
            nulo++;
        } else if(voto == 6) {
            branco++;
        } else {
            printf("Codigo invalido!\n");
        }

        printf("Digite o codigo do voto (1-4=candidatos, 5=nulo, 6=branco, 0=finalizar): ");
        scanf("%d", &voto);
    }

    printf("Total de votos para o candidato 1: %d\n", candidato1);
    printf("Total de votos para o candidato 2: %d\n", candidato2);
    printf("Total de votos para o candidato 3: %d\n", candidato3);
    printf("Total de votos para o candidato 4: %d\n", candidato4);
    printf("Total de votos nulos: %d\n", nulo);
    printf("Total de votos em branco: %d\n", branco);

    return 0;
}
