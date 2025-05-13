//Questão 43

#include <stdio.h>

// Função para ordenar os valores de forma decrescente
void ordenarDecrescente(int v[], int tamanho) {
    int i, j, temp;
    for(i = 0; i < tamanho; i++) {
        for(j = i+1; j < tamanho; j++) {
            // Troca os valores se estiverem fora de ordem
            if(v[j] > v[i]) {
                temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
        }
    }
}

int main() {
    int grupo[4], i, j;

    // Laço para ler 5 grupos de 4 valores
    for(i = 0; i < 5; i++) {
        printf("\nGrupo %d\n", i+1);
        for(j = 0; j < 4; j++) {
            // Lê os 4 valores para cada grupo
            printf("Digite o valor %c: ", 'A'+j);
            scanf("%d", &grupo[j]);
        }

        // Exibe os valores na ordem que foram lidos
        printf("Valores na ordem lida: ");
        for(j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }

        // Ordena os valores do grupo em ordem decrescente
        ordenarDecrescente(grupo, 4);

        // Exibe os valores ordenados
        printf("\nValores em ordem decrescente: ");
        for(j = 0; j < 4; j++) {
            printf("%d ", grupo[j]);
        }
        printf("\n");
    }

    return 0;
}
