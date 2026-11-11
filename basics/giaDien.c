#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);

    double maxL1 = 1984 * 50;
    double maxL2 = 2050 * 50;
    double maxL3 = 2380 * 100;
    double maxL4 = 2998 * 100;
    double maxL5 = 3350 * 100;

    if (n < 0) {
        printf("Error");
    } else if (n <= 50) {
        printf("%.2f", 1984 * n * 1.1);
    } else if (n <= 100) {
        printf("%.2f", (maxL1 + 2050 * (n - 50))*1.1);
    } else if (n <= 200) {
        printf("%.2f", (maxL1 + maxL2 + 2380 * (n - 100))*1.1);
    } else if (n <= 300) {
        printf("%.2f", (maxL1 + maxL2 + maxL3 + 2998 * (n - 200))*1.1);
    } else if (n <= 400) {
        printf("%.2f", (maxL1 + maxL2 + maxL3 + maxL4 + 3350 * (n - 300))*1.1);
    } else {
        printf("%.2f", (maxL1 + maxL2 + maxL3 + maxL4 + maxL5 + 3460 * (n - 400))*1.1);
    }

    return 0;
}