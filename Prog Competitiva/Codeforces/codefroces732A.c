// Link Codeforces: https://codeforces.com/problemset/problem/732/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int k, r; // k = preço da pá, m = valor da moeda especial
    scanf("%d %d", &k, &r);
    int pa = 1; // compra de uma pá, por isso pa = 1
    while (1) { // loop até encontrar uma quantidade válida
        int t = pa * k; // total a ser pago para a quantidade de pás
        // análisa se é possível pagar sem troco
        if (t % 10 == 0 || t % 10 == r) 
        { 
            printf("%d\n",pa); // se o resto da divisão de t por 10 terminar em 0 ou r, encerra o loop pois achou a resposta
            break;
        }
        pa++;
    }
    return 0;
}
