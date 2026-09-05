#include <stdio.h>

void ascBubbleSort (int *a, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j] < a[j-1]) {
                int t = a[j-1];
                a[j - 1] = a[j];
                a[j] = t;
            }
        }
    }
}

void print (int*a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}

int main() {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    ascBubbleSort(a, 10);
    print(a, 10);
    getchar();
    return 0;
}