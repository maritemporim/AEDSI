#include <stdio.h>

int main(void){
    int c = 0;
    long long int v[100];
    for(int i = 0; i <100; i++){
        v[i] = c + 1;
        c++;
    }
    for(int i = 2; i < 100; i++){
        v[i] = v[i-1] + v[i-2];
    }
    for(int i = 0; i < 100; i++){
        printf("%lld\n",v[i]);
    }
    return 0;
}