#include <stdio.h>

int main() {
    int x, y, soma = 0, i, menor, maior;
    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x < y) {
        menor = x;
        maior = y;
    } else {
        menor = y;
        maior = x;
    }

    for (i = menor + 1; i < maior; i++) {
        if (i % 2 != 0) {
            soma += i;
        }
    }

    printf("SOMA DOS IMPARES = %d\n", soma);
    return 0;
}