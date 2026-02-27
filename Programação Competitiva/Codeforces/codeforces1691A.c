// Link Codeforces: https://codeforces.com/problemset/problem/1691/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int t, a, b, c, d; 
    scanf("%d", &t);
    while (t--) 
    { 
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int ct = 0; // quantas pessoas correram mais que timur
        // se alguém correu mais então acrescenta mais 1 ao contador
        if (b > a) 
        {
            ct++;
        }
        if (c > a) 
        {
            ct++;
        }
        if (d > a) 
        {
            ct++;
        }

        printf("%d\n", ct); 
    }
    return 0;
}
