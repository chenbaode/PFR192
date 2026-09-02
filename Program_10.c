#include <stdio.h>

void printMinMaxDigits (int n);

int main(void)
{
    int n;
    do {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    printMinMaxDigits(n);

    return 0;
}

void printMinMaxDigits(int n)
{
    int digit;
    int min;
    int max;
    
    digit = n % 10;
    n = n / 10;
    min = max = digit;
    while (n > 0) {
        digit = n % 10;
        n = n / 10;
        if (digit < min) {
            min = digit;
        }
        if (digit > max) {
            max = digit;
        }
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);

}