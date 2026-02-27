#include <stdio.h>
#include <stdlib.h>

int main (void){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&v[i]);
    }

    int min = v[0];
    int max = v[0];

    for(int i = 0; i < n; i ++){

        if(v[i] < min){
            min = v[i];
        }

        if(v[i] > max){
            max = v[i];
        }
    }
    printf("max: %d\nmin: %d",max,min);
}
