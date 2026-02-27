// autor: mariana temporim ferreira

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 
    while (t--) { 
        int n;
        scanf("%d", &n); 

        int array[n];
        int soma = 0;// acumula a soma dos elementos
        int negativos = 0;  // conta quantos elementos são -1

        for (int i = 0; i < n; i++) {
            scanf("%d", &array[i]); 
            soma += array[i]; // soma os valores
            if (array[i] == -1) {
                negativos++; // conta quantos -1 existem
            }
        }

        int operacoes = 0; // contador de quantas operações serão realizadas

        while (soma < 0) {
            soma += 2;
            negativos--; // menos um -1 no array
            operacoes++; // contabiliza a operação feita
        }

        if (negativos % 2 != 0) {
            operacoes++; // contabiliza a operação feita
        }

        printf("%d\n", operacoes); 
    }

    return 0; 
}
