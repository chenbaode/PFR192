#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    int j;
    for (i = 2; i <= 10; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }
    return 0;
}