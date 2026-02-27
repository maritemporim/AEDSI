#include <stdio.h>

int main(void){
    int v[1000];

    int t = 0;
    for(int i = 0; i < 1000; i ++){
        v[i] = t + 1;
        t++;
    }
    
    int inicio, fim;
    printf("inicio e fim: ");
    scanf("%d%d",&inicio,&fim);

    int tam = fim - inicio;
    int v2[tam];
    int c = inicio;
    v2[0] = inicio;

    for(int i = 1; i < tam; i++){
        v2[i] = c + 1;
        c++;
    }

    for(int i = 0; i < tam; i++){
        if(v[i] == v2[i]) { printf("SIM"); break; }
        else { printf("NAO"); break; }
    }
    
} 