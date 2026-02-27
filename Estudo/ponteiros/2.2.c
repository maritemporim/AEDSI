#include <stdio.h>
#include <stdlib.h>

int maxEmin(int *max, int *min,int b, int c){
    if(*min > b){
        *min = b;
    }
    if(*min > c){
        *min = c;
    }
    if(b > *max){
        *max = b;
    }
    if(c > *max){
        *max = c;
    }
    return *min, *max;

}

int main(void){
    int a,b,c,min,max;
    scanf("%d%d%d",&a,&b,&c);
    min = a;
    max = a;
    maxEmin(&max,&min,b,c);
    printf("min: %d\nmax: %d",min,max);
}