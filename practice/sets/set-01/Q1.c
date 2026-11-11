#include <stdio.h>
#include <math.h>

int main() {
    float a = 0;
    float b = 0;
    while (a == 0 && b == 0) {
        scanf("%f", &a);
        scanf("%f", &b);
    }

    float delta = -4*a*b;
    float result = 0;

    if (delta > 0) {
        result = sqrt((-b / a));
        printf("%.2f",result);
        printf("\n%.2lf",-result);
    } else if (delta < 0) {
        return 0;
    }

    return 0;

}