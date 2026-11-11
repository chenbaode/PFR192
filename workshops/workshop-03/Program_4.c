#include <stdio.h>

double factorial (int n);

int main(void)
{
    int n = -1;
    do {
        printf("Enter positive interger: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("resule: %lf\n", factorial(n));

    return 0;
}

double factorial (int n)
{
    double p = 1;
    int i;
    for (i = 2; i <= n; i++) {
        p *= i;
    }
    return p;
}