#include <stdio.h>
#include <stdlib.h>

void subs(int *np, int n){
    *np = (n*2);
}

int main(void){
    int n;
    scanf("%d",&n);
    subs(&n, n);
    printf("%d",n);
}