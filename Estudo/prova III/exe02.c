#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int lerArq();
float mediaArq();
int maiorArqq();
int menorArq();
float desvioP();
void wArq();

int main(void){
    int num[1000];
    int n;

    n = lerArq(num, 1000);
    if(n == NULL) return NULL;

    float media = mediaArq(num, n);
    int maior = maiorArq(num, n);
    int menor = menorArq(num, n);
    float dp = desvioP(num, n, media);

    wArq(media, maior, menor, dp);

    return 0;
}

int lerArq(int num[], int maior){
    FILE *file = fopen("dados.txt", "r");
    if(file == NULL) return NULL;
    int c = 0;
    while(fscanf(file,"%d",&num[c]) == 1){
        c++;
    }
    fclose(file);
    return c;
}

float mediaArq(int num[], int n){
    float s = 0;
    for(int i = 0; i < n; i++){
        s += num[i];
    }
    return s/n;
}

int maiorArq(int num[], int n){
    int m = num[0];
    for(int i = 1; i < n; i++){
        if(num[i] > m ) m = num[i];
    }
    return m;
}

int menorArq(int num[], int n){
    int m = num[0];
    for(int i = 1; i < n; i++){
        if(m > num[i]) m = num[i];
    }

    return m;
}

float desvioP(int num[], int n, float media){
    float s = 0;
    for(int i = 0; i < n; i++){
        s += (num[i] - media) * (num[i] - media);
    }

    return sqrt(s/n);
}

void wArq(float media, int maior, int menor, float dp){
    FILE *file = fopn("resultado.txt", "w");
    if(file == NULL) return NULL;
    fprintf(fp, "Media %.2f\n Maior: %d\n, Menor: %d\n DP: %d",media,maior,menor,dp);
    fclose(file);
}
