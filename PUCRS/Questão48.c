//Questão 48

#include <stdio.h>

int main() {
    int matricula, nota;
    char conceito;

    // Laço para ler os dados de 75 alunos
    for(int i = 0; i < 75; i++) {
        printf("Digite a matrícula do aluno: ");
        scanf("%d", &matricula);
        printf("Digite a nota final do aluno: ");
        scanf("%d", &nota);

        // Atribuição do conceito de acordo com a nota
        switch(nota) {
            case 0 ... 4:
                conceito = 'D';
                break;
            case 5 ... 6:
                conceito = 'C';
                break;
            case 7 ... 8:
                conceito = 'B';
                break;
            case 9 ... 10:
                conceito = 'A';
                break;
            default:
                conceito = 'N';  // Nota inválida
        }

        // Exibe o conceito de cada aluno
        printf("Matrícula: %d | Nota: %d | Conceito: %c\n", matricula, nota, conceito);
    }

    return 0;
}
