// Link Codeforces: https://codeforces.com/problemset/problem/339/A
// Autor: Mariana Temporim Ferreira

#include <stdio.h>
#include <string.h>   
#include <stdlib.h>   

// função de comparação para usar com qsort, compara dois caracteres.
// retorna um valor negativo se 'a' < 'b', zero se 'a' == 'b', e positivo se 'a' > 'b'.
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char s[105];   
    scanf("%s", s); 

    int len = strlen(s); // comprimento da string 's' armazenada em 'len'.
    char nums[55];
    int count = 0;

    for (int i = 0; i < len; i += 2) {
        nums[count++] = s[i]; // Atribui o caractere atual (que se espera ser um dígito) ao array 'nums'
                               // e incrementa o contador 'count'.
    }

    // ordena o array 'nums' usando a função qsort (quick sort).
    // 'nums': o array a ser ordenado.
    // 'count': o número de elementos no array.
    // sizeof(char): o tamanho de cada elemento no array (um caractere).
    // 'compare': a função de comparação definida anteriormente para ordenar caracteres.
    qsort(nums, count, sizeof(char), compare);

    for (int i = 0; i < count; i++) {
        printf("%c", nums[i]); // imprime o caractere numérico atual.
        if (i != count - 1) // verifica se não é o último número no array.
            printf("+");    // se não for o último, imprime um sinal de '+' após o número.
    }
    printf("\n"); 

    return 0; 
}