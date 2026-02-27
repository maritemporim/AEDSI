#include <stdio.h>
#include <stdlib.h>

int main(void){
    int max = 0;
    int min = 0;
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float media = (float)(a + b + c) / 3;
    min = a;

    if(min > b){
        min = b;
    }
    if( min > c){
        min = c;
    }

    max = a;

    if(b > max){
        max = b;
    }
    if(c > max){
        max = c;
    }
    
    printf("max: %d\nmin: %d\nmedia: %.2f",max,min,media);
    return 0;
}
    