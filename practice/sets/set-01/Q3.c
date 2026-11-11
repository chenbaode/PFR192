#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("\nOUTPUT:\n");
    if (a <= 0 || b <= 0) {
        printf("The edges must be positive numbers!\n");
    } else {
        printf("Perimeter: %.2f\n", 2 * (a + b));
        printf("Area: %.2f\n", a * b);
    }
    return 0;
}
