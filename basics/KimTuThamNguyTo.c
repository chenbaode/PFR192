#include <stdio.h>

int isPrims(int x) {
    int i;
    if (x < 2) {
        return 0;
    }

    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    while (n < 1 || n > 15) {
        printf("Error!\n");
        printf("Enter an integer n: ");
        scanf("%d", &n);
    }

    int i;
    int count;
    int Primes = 2;
    for (i = 1; i <= n; i++) {
        for (count = 0; count < i;) {
            if (isPrims(Primes)) {
                count++;
                printf("%d ", Primes);
            }
            Primes++;
        }
        printf("\n");
    }
}