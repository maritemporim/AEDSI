// Link Codeforces: https://codeforces.com/problemset/problem/299/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int qtd;
    scanf("%d", &qtd);
    int n[qtd]; // vetor pra guardar os números

    for (int i = 0; i < qtd; i++) {
        scanf("%d", &n[i]);
    }

    // testando divisibilidade dos numeros
    for (int i = 0; i < qtd; i++) {
        int t = n[i]; 
        int d = 1; // numero "aleatório" para teste

        for (int j = 0; j < qtd; j++) {
            if (n[j] % t != 0) { // se não for divisivel d = 0 e para o processo
                d = 0;
                break; 
            }
        }
        if (d) { // se d for verdade e passar nos teste imprime ele 
            printf("%d\n", t);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}

// o código funciona porém no teste 22 deu tempo excedido, não consegui pensar em outra forma de compactar ainda mais o código para ser mais rápido e direto
