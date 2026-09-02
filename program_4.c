#include <stdio.h>

int main(void) 
{
    int x;
    int y;

    do {
        printf("Accept two integers: ");
        scanf("%d %d", &x, &y);
        int t = x;
        x = y;
        y = t;
        printf("x = %d add y = %d\n", x, y);
    } while (x != 0 && y != 0);
}