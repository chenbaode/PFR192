#include <stdio.h>

int main() {
    int a, b, x, y, uscnn;
    scanf("%d%d", &a, &b);
    x = a;
    y = b;

    while (a!=b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    uscnn = a;
    int min, max;
    max = x > y ? x : y;
    min = x < y ? x : y;

    printf("LCM of %d and %d is: %d\n", x, y, max/uscnn*min);

    return 0;
}