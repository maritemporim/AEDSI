#include <stdio.h>

int main(void){
    int a;
    int r;
    int v[100];
    scanf("%d%d",&a,&r);
    for(int i = 0; i < 100; i++){
        v[i] = a + ((i+1) - 1) * r;
        printf("%d\n",v[i]);
    }
}