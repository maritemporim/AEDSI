// Link do CodeForces: https://codeforces.com/problemset/problem/1154/A
// Autora: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int x1, x2, x3, x4;
    int a, b, c;

    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
     
    // tentando encontrar o maior valor dos digitados, inicia-se no x1 para nao precisar ter um else
    int maior = x1;
    if (x2 > maior) { maior = x2; }
    if (x3 > maior) { maior = x3; }
    if (x4 > maior) { maior = x4; }

    // aqui se descobre o valor de a b e c subtraindo o valor maior pelo valor seguinte digitado
    if (maior == x1) {
        a = maior - x2;
        b = maior - x3;
        c = maior - x4; }

    else if (maior == x2) {
        a = maior - x1;
        b = maior - x3;
        c = maior - x4; }

     else if (maior == x3) {
        a = maior - x1;
        b = maior - x2;
        c = maior - x4; }

     else {
        a = maior - x1;
        b = maior - x2;
        c = maior - x3; }
    
    printf("%d %d %d\n", a, b, c);
    
    return 0;
}

