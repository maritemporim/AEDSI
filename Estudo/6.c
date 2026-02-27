//retangulo
#include <stdio.h>
int main(void){
    int a,l;
    scanf("%d%d",&a,&l);
    for(int i = 0; i < a; i++){
        for(int j = 0; j < l; j++){
            printf("*");
        }
        printf("\n");
    }
}