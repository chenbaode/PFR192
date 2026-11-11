#include <stdio.h>

int main() {
    int n;
    int y;
    scanf("%d", &n);

    switch (n) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("The month %d has 31 days\n", n);
            break;
        case 4: case 6: case 9: case 11:
            printf("The month %d has 30 days\n", n);
            break;
        case 2:
            printf("Input years: ");
            scanf("%d", &y);
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
                printf("The month 2 has 29 days.\n");
            } else {
                printf("The month 2 has 28 days.\n");
            }
            break;
        default:
            printf("%d is not a month of the years.\n", n);
    }

    return 0;
}