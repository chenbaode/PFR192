#include <stdio.h>

void sortAsc(int a[], int n) {
    int i, j, minIdx;
    for (i = 0; i < n - 1; i++) {
        minIdx = i;
        for (j = i; j < n; j++) {
            if (a[j] < a[minIdx]) {
                minIdx = j;
            }
        }
        if (i != minIdx) {
            int tmp = a[i];
            a[i] = a[minIdx];
            a[minIdx] = tmp;
        }
    }
    printf("\n");
}

void bubbleSortAsc(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (a[j-1] > a[j]) {
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = a[j];
            }
        }
    }
}

int main() {

}