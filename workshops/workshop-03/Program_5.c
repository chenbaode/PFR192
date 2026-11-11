#include <stdio.h>

double fibo (int n);

int main(void)
{
    int n = 0;
    do {
        printf("Enter n position in Fibonacci sequence: ");
        scanf("%d", &n);
    } while (n < 1);

    printf("Result: %lf\n", fibo(n));

    return 0;
}

double fibo (int n)
{
    int t1 = 1;
    int t2 = 1;
    int f = 1;
    
    for (int i = 3; i <= n; i++) {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return f;
}