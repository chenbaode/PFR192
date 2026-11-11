#include <stdio.h>
#include <stdlib.h>

void inputArr(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i); scanf("%d", &a[i]);
    }
}

void displayArr(int *a, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    //int a[n];
    //int *a = (int *)malloc(n*sizeof(int));
    int *a = (int *)calloc(n, sizeof(int));
    inputArr(a, n);
    displayArr(a, n);
    free(a);
    return 0;
}