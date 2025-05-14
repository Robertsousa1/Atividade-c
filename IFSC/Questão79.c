// Questão 79 
#include <stdio.h>

int main() {
    char letra;

    printf("Digite a primeira letra do estado civil (S, C, V, D, E): ");
    scanf(" %c", &letra);

    switch (letra) {
        case 'S': case 's': printf("Solteiro(a)\n"); break;
        case 'C': case 'c': printf("Casado(a)\n"); break;
        case 'V': case 'v': printf("Viuvo(a)\n"); break;
        case 'D': case 'd': printf("Div
