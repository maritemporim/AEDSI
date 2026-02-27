// Link do CodeForces: https://codeforces.com/problemset/problem/2060/A
// Autora: Mariana Temporim Ferreira

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    while (a--) {
        int a1, a2, a4, a5;
        scanf("%d %d %d %d", &a1, &a2, &a4, &a5);
        
        int nf = 0; //iniciado com 0 para a contagem não dar errrado 
        int a3 = -100; // testando valor de 100 a -100, já que o enunciado diz que esse valor tem que ser menor que 100
        
        while (a3 <= 100) { // testando em um loop  numeros entre -100 a 100 para ver o numero max de fibonaccidade
            int i = 0;
            if (a1 + a2 == a3) i++;
            if (a2 + a3 == a4) i++;
            if (a3 + a4 == a5) i++;
            
            if (i > nf) { // se o contador i for maior que o nf então o valor de nf sera atualizado para o valor de i
                nf = i; }
            
            a3++;
        }
        
        printf("%d\n", nf);
    }
    
    return 0;
}
