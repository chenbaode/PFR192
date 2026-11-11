#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even number.\n", n);
    } else {
        printf("%d is an odd number.\n", n);
    }

    return 0;
}

//gcc -std=c11 -Wall -Wextra chanLe.c -o chanLe && ./chanLe