#include <stdio.h>

int inputN(void) {
    int n = 0;
    do
    {
        printf("Enter a possitive integer (1-9): ");
        if (scanf("%d", &n) != 1) {
            while (getchar() != '\n');
            n = 0;
        }
    } while (n < 1 || n > 9);

    return n;
}

void printfPattern(int n) {
    int i, j;
    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            if (i == n || j == 1|| j == i) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main () {
    char conti = 'n';
    do
    {
        int n = inputN();
        printfPattern(n);
        
        printf("Continue (y/n): ");
        scanf(" %c", &conti);

    } while (conti == 'y' || conti == 'Y');

    return 0;
    
}