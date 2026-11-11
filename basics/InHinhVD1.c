#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while (n < 1 || n > 26) {
        printf("Error\n");
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }
    
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n - i; j++) {
            printf(" ");
        }
        for (j = 'A' + i - 1; j >= 'A'; j--) {
            printf("%c", j);
        }
        for (j = 'A' + 1; j < 'A' + i; j++) {
            printf("%c", j);
        }
        printf("\n");

    }
}