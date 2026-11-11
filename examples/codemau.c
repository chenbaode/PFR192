#include <stdio.h>

void clearBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c!= EOF);
}

double getDouble(double low, double high) {
    char last;
    double rs;
    while (1) {
        printf("Enter value: ");
        if (scanf("%lf%c", &rs, &last) == 2 && last == '\n') {
            if (rs >= low && rs <= high) {
                return rs;
            }
        } else {
            clearBuffer();
        }
        printf("Error!");
    }
}

int main(void) {
    printf("%.2f", getDouble(-10,10));
    return 0;
}