Questao17

#include <stdio.h>

int main() {
    int A, B, C, D;

    printf("Digite quatro números: ");
    scanf("%d %d %d %d", &A, &B, &C, &D);

    printf("A+B = %d, A*B = %d\n", A + B, A * B);
    printf("A+C = %d, A*C = %d\n", A + C, A * C);
    printf("A+D = %d, A*D = %d\n", A + D, A * D);
    printf("B+C = %d, B*C = %d\n", B + C, B * C);
    printf("B+D = %d, B*D = %d\n", B + D, B * D);
    printf("C+D = %d, C*D = %d\n", C + D, C * D);

    return 0;
}
