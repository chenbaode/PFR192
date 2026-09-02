#include <stdio.h>

int isValidDate (int d, int m, int y);

int main(void)
{
    int d;
    int m;
    int y;
    printf("Enter d, m, y: ");
    scanf("%d,%d,%d", &d, &m, &y);
    if (isValidDate(d, m, y)) {
        printf("Valid date\n");
    } else {
        printf("Invalid date\n");
    }

    return 0;
}

int isValidDate (int d, int m, int y)
{
    int maxd = 31;
    if (d < 1 || d > 31 || m < 1 || m > 12) {
        return 0;
    }
    if ( m == 4 || m == 6 || m == 9 || m == 11) {
        maxd = 30;
    } else if (m == 2) {
        if ( y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            maxd = 29;
        } else {
            maxd = 28;
        }
    }
    
    if (d <= maxd) {
        return 1;
    } else {
        return 0;
    }
}