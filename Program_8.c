#include <stdio.h>

double makeDouble (int ipart, int fraction);

int main(void)
{
    int ipart;
    printf("Enter integer part: ");
    scanf("%d", &ipart);

    int fraction = 0;
    do {
        printf("Enter faction: ");
        scanf("%d", &fraction);
    } while (fraction < 0);
    double value = makeDouble(ipart, fraction);

    printf("Result: %lf\n", value);

    return 0;
}

double makeDouble (int ipart, int fraction)
{
    double d_f = fraction;
    while (d_f >= 1) {
        d_f = d_f/10;
    }
    if (ipart < 0) {
        return ipart - d_f;
    } else {
        return ipart + d_f;
    }
}