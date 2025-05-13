Questao25

#include <stdio.h>

int main() {
    int Int1, Int2, quociente, resto;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &Int1, &Int2);

    quociente = Int1 / Int2;
    resto = Int1 % Int2;

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
