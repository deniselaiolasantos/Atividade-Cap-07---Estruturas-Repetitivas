#include <stdio.h>

int main() {
    int n, i, qtd, total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        total += qtd;
        if (tipo == 'C' || tipo == 'c') {
            coelhos += qtd;
        } else if (tipo == 'R' || tipo == 'r') {
            ratos += qtd;
        } else if (tipo == 'S' || tipo == 's') {
            sapos += qtd;
        }
    }

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", (double)coelhos / total * 100.0);
    printf("Percentual de ratos: %.2lf %%\n", (double)ratos / total * 100.0);
    printf("Percentual de sapos: %.2lf %%\n", (double)sapos / total * 100.0);

    return 0;
}