#include <stdio.h>

int main() {
    int i, n;
    scanf("%d", &n);
    
    for (i = 0; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    for (i = n; i >= 0; i--) {
        printf("%d ", i);
    }

    printf("\n");
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    for (i = 0; i <= n; i++) {
        if (i % 2 != 0){
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}