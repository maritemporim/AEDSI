//Belém, como você pode ver no print, eu só consegui fazer com que o Codeforces testasse apenas a primeira tentativa. Até consegui pensar em outras forma de se fazer com função porém não consegui colocar em prática, então o tempo no teste 2 ficou excedido.

// Link Codeforces: https://codeforces.com/problemset/problem/9/C
// Autor: Mariana Temporim Ferreira

#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n); 

    int contador = 0; 
    int atual = 1; // primeiro numero valido = 1

    while (atual <= n) {
        contador++;

        // Se multiplicar por 10 ainda fica dentro de n, segue-se fazendo um número binário maior 
        if (atual * 10 <= n) {
            atual = atual * 10;
        } else {
            // Se não da pra multiplicar mais por 10 sem ultrapassar n, volta-se até o ultimo digito que não era 1 
            while (atual % 10 == 1) {
                atual /= 10;
            }

            // aumenta o último dígito 
            atual += 1;
        }
    }

    printf("%u\n", contador);
    return 0;
}
