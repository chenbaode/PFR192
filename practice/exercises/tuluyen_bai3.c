#include <stdio.h>

int inputN() {
    int n = 0;
    do {
        printf("Enter a positive integer (1-26): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 1 || n > 26);
    return n;
}

void printPattern(int n) {
    int i, j;
    int value = 'A';
    for (i = n; i >= 1; i--) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }

        for (j = 0; j < i; j++) {
            printf("%c", value + j);
        }

        for (j = i - 2; j >= 0; j--) {
            printf("%c", value + j);
        }

        printf("\n");
    }
}

int main(void) {
    int n = inputN();
    printPattern(n);
}