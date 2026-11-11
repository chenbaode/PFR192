#include <stdio.h>

int main() {
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    while (n > 20 || n < 02) {
        printf("Error!");
        printf("Enter an integer n: ");
        scanf("%d", &n);
    }

    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 0; j < 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        printf("*");
        if (i > 1) {
            for (j = 0; j < 2 * i - 3; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}