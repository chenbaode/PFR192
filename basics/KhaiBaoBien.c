#include <stdio.h>

int main() {
    char vC;
    int n;
    float vF;
    double vD;

    vC = 'F';
    n = 10;
    vF = 6.5F;
    vD = 9.8;

    printf("\n\nCharacter: %c", vC);
    printf("\nNumber: %d", n);
    printf("\nFloat: %f", vF);
    printf("\nFloat: %.1f", vF);
    printf("\nDouble: %lf", vD);
    printf("\nDouble: %.2lf", vD);
    printf("\n\n");

    printf("Character: %c \t Number: %d\n", vC, n);
    printf("Float: %.2f \t Double: %.2lf\n", vF, vD);

    printf("\n");


    return 0;
}
