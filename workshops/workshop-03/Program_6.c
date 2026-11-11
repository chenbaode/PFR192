#include <stdio.h>

int isFibonacci (int n);

int main(void)
{
    int n = 0;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 1);

    if (isFibonacci(n) == 1) {
        printf("It is a Fibonacci element.\n");
    } else {
        printf("It is not a Fibonacci element.\n");
    }

    return 0;
}

int isFibonacci (int n)
{
    int t1 = 1;
    int t2 = 1;
    int f = 1;

    if (n == 1) {
        return 1;
    }
    while (f < n) {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    if (n == f) {
        return 1;
    } else {
        return 0;
    }
}