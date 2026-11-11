#include <stdio.h>

int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int j = 2; j < n; j++) {
        if (n % j == 0) {
            return 0;
        }
    }

    return 1;
}

void listTheFirstNPrimes2(int n) {
    int count = 0;
    int i;
    for (i = 2; count < n; i++) {
        if (isPrime(i) == 1) {
            count++;
            printf("%d ", i);
        }
    }
    printf("\n");
}

int sumTheFirstNPrimes(int n) {
    int count = 0;
    int i;
    int sum = 0;
    for (i = 2; count < n; i++) {
        if (isPrime(i) == 1) {
            count++;
            sum += i;
        }
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    listTheFirstNPrimes2(n);
    printf("Total value of the first %d primes: %d\n", n, sumTheFirstNPrimes(n));
    return 0;
}