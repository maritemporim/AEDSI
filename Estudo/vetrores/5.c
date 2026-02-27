#include <stdio.h>

int main(void){
    int n[100];
    for(int i = 0; i < 100; i++){
        scanf("%d",&n[i]);
    }

    int min = n[0];
    int max = n[0];

    for(int i = 0; i < 100; i++){ 

        if (max < n[i]) max = n[i];

        if(min > n[i]) min = n[i];
    }

    printf("max: %d\nmin: %d",max,min);

    return 0;
}