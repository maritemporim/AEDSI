#include <stdio.h>

int main(void){
    int n;
    printf("sequencia: ");
    scanf("%d",&n);
    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }
    
    int inicio, fim;
    printf("inicio e fim: ");
    scanf("%d%d",&inicio,&fim);

    int v2[fim];
    int c = inicio;
    v2[0] = inicio;

    for(int i = 1; i < fim; i++){
        v2[i] = c + 1;
        c++;
    }

    for(int i = 0; i < fim; i++){
        if(v[i] == v2[i]) { printf("SIM"); break; }
        else { printf("NAO"); break; }
    }
    
} 