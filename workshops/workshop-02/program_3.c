#include <stdio.h>

int main(void)
{
    int S = 0;
    int x = 0;

    printf("Enter integers until the value 0: ");
    scanf("%d", &x);

    while (x != 0) {
        S = S + x;
        scanf("%d", &x);
    }

    printf("Sum of interger: %d\n", S);

    return 0;
}