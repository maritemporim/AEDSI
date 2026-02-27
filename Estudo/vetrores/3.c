#include <stdio.h>

int main(void){
    int v[10];
    int n, flag =0;
    scanf("%d",&n);
    for(int i = 0; i < 10; i++){
        scanf("%d",&v[i]);
        if(v[i] == n){
            flag = 1;
        }
    }

    if(flag != 0) printf("sim");
    else printf("nao");

    return 0;
}