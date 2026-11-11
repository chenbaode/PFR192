#include <stdio.h>

double getDouble(double low, double high) {
    double n;
    do {
        printf("Enter value: ");
        if (scanf("%lf", &n) != 1) {
            while (getchar() != '\n');
            n = 0.0;
        }
    } while (n < low || n > high);

    return n;
}

int main(void) {
    printf("%.2f", getDouble(3,10));
    return 0;
}