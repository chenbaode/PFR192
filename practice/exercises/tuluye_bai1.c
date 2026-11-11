#include <stdio.h>

int main(void) {
    int n;
    do {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    } while (n <= 0);
    
    int i, j;
    int value = 1;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("%d ", value);
            value++;
        }
        printf("\n");
    }

    return 0;
}