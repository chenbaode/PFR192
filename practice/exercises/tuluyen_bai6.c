#include <stdio.h>

int inputN(void) {
    int n;
    do {
        printf("Enter n (1-9): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 1 || n > 9);

    return n;
}

void hollowNumberPyramid(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        if (i == n) {
            for (j = 0; j < n*2-1; j++) {
                printf("%d ", j);
            }
            printf("\n");
            break;
        }

        for (j = 0; j < n - i; j++) {
            printf("  ");
        }

        printf("1 ");

        for (j = 0; j < 2 * i - 3; j++) {
            printf("  ");
        }

        if (i != 1) {
            printf("%d ", 2 * i - 1);
        }
        printf("\n");
    }
}

void hollowDiamond(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        printf("*");

        for (j = 0; j < i * 2 - 3; j++) {
            printf(" ");
        }

        if (i > 1) {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = n - 1; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        printf("*");

        for (j = 0; j < i * 2 - 3; j++) {
            printf(" ");
        }

        if (i > 1) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int n = inputN();          // 1. Nhập n (1-9)
    hollowNumberPyramid(n);    // 2. In kim tự tháp số rỗng
    printf("\n");              // 3. In 1 dòng trống
    hollowDiamond(n);          // 4. In kim cương rỗng
    return 0;
}