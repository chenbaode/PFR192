#include <stdio.h>

int main(void)
{
    char c1 = 0;
    char c2 = 0;
    printf("Enter charracters c1: ");
    scanf(" %c", &c1);
    printf("Enter characters c2: ");
    scanf(" %c", &c2);

    if (c1 > c2) {
        char t = c1;
        c1 = c2;
        c2 = t;
    }
    char d = c2 - c1;

    printf("Difference betwenn c1, c2: %d\n", d);

    for (char i = c1 + 1; i < c2; i++) {
        printf("%c : %d, %o, %X\n", i ,i ,i ,i);
    }
}