// Questão 7
#include <stdio.h>

int main() {
    int codigo;
    float n1, n2, n3, media;

    while(1) {
        printf("Digite o codigo do aluno (0 para sair): ");
        scanf("%d", &codigo);
        if(codigo == 0) break; // Encerra o loop

        printf("Digite as 3 notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media = (n1 + n2 + n3) / 3.0; // Calcula a média
        printf("Media do aluno %d: %.2f\n", codigo, media);
    }

    return 0;
}
