Questão 49
  
#include <stdio.h>

int main() {
    int n, i, primo = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    if(n <= 1) primo = 0;
    for(i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            primo = 0;
            break;
        }
    }
    if(primo)
        printf("%d eh primo\n", n);
    else
        printf("%d nao eh primo\n", n);
    return 0;
}
