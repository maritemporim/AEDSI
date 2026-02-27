#include <stdio.h>
#include <stdlib.h>

int main(void){
    int v[10];
    int soma = 0;
    int prod = 1;
    for(int i = 0; i < 10; i++){
        scanf("%d",&v[i]);
        soma += v[i];
        prod *= v[i];
    }
    printf("soma: %d\nproduto: %d",soma,prod);
}