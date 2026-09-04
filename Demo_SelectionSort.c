#include <stdio.h>

void ascSelectionSort (int *a, int n) {
    int minIndex;
    int i, j;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[minIndex] > a[j]) {
                minIndex = j;
            }
            if (minIndex > i) {
                int t = a[minIndex];
                a[minIndex] = a[i];
                a[i] = t;
            }
        }
    }
}

void print (int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
}

int main(void) {
    int a[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};
    ascSelectionSort(a, 10);
    print(a, 10);
    getchar();
    return 0;
}