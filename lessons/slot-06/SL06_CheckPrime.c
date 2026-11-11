#include <stdio.h>

int isPrimes(int n) {
    if (n < 2) {
        return 0;
    }

    int i;
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sumPrime(int n) {
    int i, S = 0;
    if (n < 2) return S;
    for (i = 2; i <= n; i++) {
        if (isPrimes(i)) {
            S += i;
        }
    }
    return S;
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("Total value of prime numbers from 2 to %d is: %d", n, sumPrime(n));

    return 0;
}