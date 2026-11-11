#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Enter a positive integer: ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
        }
    } while (n <= 0);

    int i, j;
    int value = 'B';
    for (i = 1; i <= n; i++) {
        for (j = 0; j < (2 * i) - 1; j++) {
            if (value == 'B') {
                value--;
                printf("%c", value);
            } else {
                value++;
                printf("%c", value);
            }
        }
        printf("\n");
    }

    return 0;
}