#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;

    int i;
    for (i = 0; i <= n; i++) {
        sum+=i;
    }
    printf("%d\n", sum);
    
    sum = 0;
    for (i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            sum+=i;
        }
    }
    printf("%d\n", sum);

    sum = 0;
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            sum+=i;
        }
    }
    printf("%d\n", sum);

}