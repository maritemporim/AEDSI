//Link Codeforces: https://codeforces.com/problemset/problem/151/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np; 
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    int td = (k * l) / nl;  // total de brindes que podem ser feitos com a bebida
    int tl = c * d; // total de fatias de limão disponíveis
    int ts = p / np; // total de brindes que podem ser feitos com o sal
    int x = td;
    if (tl < x) // atribui a x o recurso que acaba primeiro
    {
        x = tl;
    }
    if (ts < x) 
    {
        x = ts;
    }
    printf("%d\n", x/n);
    return 0;
}
