#include <stdio.h>

int main(void){
    int v[10];
    int soma = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d",&v[i]);
        if(i%2 == 0 || i == 0){
            soma += v[i];
        }
    }
    printf("soma: %d",soma);
}