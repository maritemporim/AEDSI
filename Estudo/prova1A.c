#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n > 0 && n % 2 == 1) {
        int centro = n / 2;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
        
                if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                    printf("*");
                }
              
                else if (i >= centro - 2 && i <= centro + 2 &&
                         j >= centro - 2 && j <= centro + 2) {
                    printf("*");
                }

                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}
