#include <stdio.h>

void displayArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void inputArr(int a[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int getFirstPos(int a[], int n, int kw) {
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == kw) {
            return i;
        }
    }

    return -1;
}

void searching(int a[], int n) {
    int x, pos;
    printf("Input searching number: ");
    scanf("%d", &x);
    pos = getFirstPos(a, n, x);
    if (pos != -1) {
        printf("The position first found %d is %d", x, pos);
    } else {
        printf("Find not found %d in the array", x);
    }
}

int main() {
    int n = 14;
    int a[] = {3, 5, 6, 9, 8, 4, 5, 7, 2, 3, 6, 5, 9, 2};
    searching(a, n);
    printf("\n");
    return 0;
}