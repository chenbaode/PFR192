#include <stdio.h>
#include <math.h>

int main(void) {
    int x, y;
    scanf("%d%d", &x, &y);

    if (x > y) {
        int tmp = x;
        x = y;
        y = tmp;
    }

    int i = 1;
    while (1) {
        if ((y*i) % x == 0) {
            printf("%d", y*i);
            printf("\n");
            return 0;
        }
        i++;
    }
    return 0;

}