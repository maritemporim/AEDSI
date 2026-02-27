// Link do CodeForces: https://codeforces.com/problemset/problem/818/A
// Autora: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    long long n, k; // como o codeforces estava fazendo testes com numeros muito grandes o int nao estava comportando o tamanho dos numeros, entao tive que utilizar o long long
    scanf("%lld %lld", &n, &k);
    
    long long v = n / 2; // número max de vencedores, pois não pode ser maior que a metade de n
    long long d = v / (k + 1); // os diplomas vao ser definidos pelos vencedores dividido pela razao dos diplomas com os certificados + 1
    long long c = d * k; // os certificados são n vezes maior que o diploma
    long long nvd = n - (d + c); 
    
    printf("%lld %lld %lld\n", d, c, nvd);
    
    return 0;
}