#include <stdio.h>

int sumDigits (int n);

int main(void)
{
    int n = 0;
    do {
        printf("Enter n: ");
        scanf("%d", &n);

        if (n >= 0) {
            int S = sumDigits(n);
            printf("Result: %d\n", S);
        }
    } while ( n >= 0);

    return 0;
}

int sumDigits (int n)
{
    int sum = 0;
    int remainder = 0;
    do {
        remainder = n % 10;
        n = n/10;
        sum += remainder;
    } while (n > 0);

    return sum;
}