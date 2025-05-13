Questão 33
  
#include <stdio.h>
int main() {
 float preco, novoPreco;
 printf("Digite o preço: ");
 scanf("%f", &preco);
 if (preco > 100)
 novoPreco = preco * 0.9;
 else
 novoPreco = preco;
 printf("Preço final: %.2f", novoPreco);
 return 0;
}
