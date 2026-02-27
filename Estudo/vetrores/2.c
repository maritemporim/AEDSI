#include <stdio.h>
#include <math.h>

int main(void){
    int v[10];
    int soma = 0;
    for(int i = 0; i < 10; i++){
        scanf("%d",&v[i]);
        soma += v[i];
   }

   float media = (float)soma/10;
   float somaDesv = 0;

   for(int i = 0; i < 10; i++){
    somaDesv += pow(v[i]-media,2);
   }

   float quadrado = sqrt(somaDesv / 10);

   printf("media: %.2f\nDesvio padrao: %.2f",media,quadrado);
}