#include <stdio.h>
#include <math.h>

int isPrime (int n);

int main(void)
{
    int n;
    do {
        printf("Enter a positive integer n (n >= 2): ");
        scanf("%d", &n);
    } while (n < 2);

    printf("Primes between 2 and %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

int isPrime (int n)
{
    int m = sqrt(n);
    if (n < 2) {
        return 0;
    }
    for (int i = 2; i <= m; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}