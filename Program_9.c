#include <stdio.h>

int gcd (int a, int b);
int lcm (int a, int b);

int main(void)
{
    int a;
    int b;
    do {
        printf("Enter a: ");
        scanf("%d", &a);
        printf("Enter b: ");
        scanf("%d", &b);
    } while (a <= 0 || b <= 0);

    int d = gcd(a, b);
    int m = lcm (a, b);

    printf("Greatest common divisor: %d\n", d);
    printf("Least commong multiple: %d\n", m);
}

int gcd (int a, int b)
{
    int r = 0;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm (int a, int b)
{
    return a*b / gcd (a,b);
}