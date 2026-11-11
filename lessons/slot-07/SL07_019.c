#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d%d", &a, &b);
    
    int i;
    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
