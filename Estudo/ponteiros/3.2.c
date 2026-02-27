#include <stdio.h>
#include <stdlib.h>

void varias (int n, int *min, int *max, int v[], float *media ){
    int soma = 0;

    for(int i =0; i <n;i++){
        scanf("%d",&v[i]);
    }

    *max = v[0];
    *min = v[0];

    for(int i = 0; i < n; i ++){

        if(v[i] < *min){
            *min = v[i];
        }

        if(v[i] > *max){
            *max = v[i];
        }
        soma += v[i];
    }

    *media = (float)soma/n;    
}

int main(void){
    int n;
    float media;
    scanf("%d",&n);
    int v[n];
    int max = 0, min = 0;
    varias(n,&min,&max,v,&media);
    printf("min: %d\nmax: %d\nmedia: %.2f",min,max,media);

    return 0;
}