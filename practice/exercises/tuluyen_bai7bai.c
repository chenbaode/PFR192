#include <stdio.h>

int inputN(void) {
    int n = 0;
    do {
        printf("Enter n (3-15): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 3 || n > 15);

    return n;
}

void letterN(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j == 0 || j == n-1 || j == i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void letterZ(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == (n-1) || (j+i) == (n-1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void boxX(int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == (n-1) || j == 0 || j == (n-1) || i == j || (i+j) == (n-1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    int n = inputN();
    letterN(n); printf("\n");
    letterZ(n); printf("\n");
    boxX(n); printf("\n");

    return 0;
}