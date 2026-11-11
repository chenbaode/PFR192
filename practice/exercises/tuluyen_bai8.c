#include <stdio.h>

int inputN(void) {
    int n;
    do {
        printf("Enter n (1-9) ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 1 || n > 9);

    return n;
}

void numberRow(int n, int i) {
    int j;

    for (j = 0; j < n - i; j++) {
        printf("  ");
    }

    for (j = 0; j < i; j++) {
        printf("%d ", j + 1);
    }

    j -= 2;

    for ( ; j >= 0; j--) {
        printf("%d ", j + 1);
    }
}

void numberDiamond(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        numberRow(n, i);
        printf("\n");
    }

    for (i = n - 1; i >= 1; i--) {
        numberRow(n, i);
        printf("\n");
    }
}

void numberHourglass(int n) {
    int i;
    for (i = n; i > 1; i--) {
        numberRow(n, i);
        printf("\n");
    }

    for (; i <= n; i++) {
        numberRow(n, i);
        printf("\n");
    }
}

int main(void) {
    int n = inputN();
    numberDiamond(n); printf("\n");
    numberHourglass(n);
    return 0;
}