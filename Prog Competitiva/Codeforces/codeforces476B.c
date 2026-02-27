// Link Codeforces: https://codeforces.com/problemset/problem/476/B
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int combinacao(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main() {
    char comando;
    int i;

    int drazilMaisMenos = 0;
    int dreamoonMaisMenos = 0;
    int incertos = 0;

    // Leitura dos comandos do Drazil
    for (i = 0; i < 10; i++) {
        scanf(" %c", &comando);
        if (comando == '+' || comando == '-') {
            if (comando == '+') drazilMaisMenos++;
            else drazilMaisMenos--;
        } else {
            break;
        }
    }

    // Leitura dos comandos do Dreamoon
    for (i = 0; i < 10; i++) {
        scanf(" %c", &comando);
        if (comando == '+' || comando == '-' || comando == '?') {
            if (comando == '+') dreamoonMaisMenos++;
            else if (comando == '-') dreamoonMaisMenos--;
            else incertos++;
        } else {
            break;
        }
    }

    int diferenca = drazilMaisMenos - dreamoonMaisMenos;

    if ((incertos + diferenca) % 2 != 0 || incertos < abs(diferenca)) {
        printf("0.000000000000\n");
        return 0;
    }

    int quantosPositivos = (incertos + diferenca) / 2;
    int totalPossibilidades = 1;
    for (i = 0; i < incertos; i++) {
        totalPossibilidades *= 2;
    }

    int jeitosCertos = combinacao(incertos, quantosPositivos);
    double chance = (double)jeitosCertos / totalPossibilidades;

    printf("%.12lf\n", chance);

    return 0;
}
