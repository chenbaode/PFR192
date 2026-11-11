#include <stdio.h>

int main() {
    int i, n, S = 0, S1 = 0, S2 = 0;
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        S+=i;
        if (i == n) {
            printf("%d", i);
        } else {
            printf("%d + ", i);
        }
    }
    printf(" = %d\n", S);

    for (i = 1; i <= n; i+=2) {
        S1+=i;
        if (i == n || i == (n - 1)) {
            printf("%d", i);
        } else {
            printf("%d + ", i);
        }
    }
    printf(" = %d\n", S1);

    for (i = 0; i <= n; i+=2) {
        S2+=i;
        if (i == n || i == (n - 1)) {
            printf("%d", i);
        } else {
            printf("%d + ", i);
        }
    }
    printf(" = %d\n", S2);
}