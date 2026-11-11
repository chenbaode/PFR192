#include <stdio.h>

static int firstLinearSearch (int x, const int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

static int lastLineSearch (int x,const int a[], int n) {
    for (int i = (n - 1); i >= 0; i--) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;
}

int main (void) {
    int a[] = {3, 34, 5, 1, 2, 8, 9, 2, 9};
    int x = 2;
    int pos1 = firstLinearSearch(x, a, 9);
    if (pos1 >= 0) {
        int pos2 = lastLineSearch (x, a, 9);
        printf ("First existence: %d, last exitence: %d\n", pos1, pos2);
    } else {
        printf("%d does not exits!\n", x);
    }
    getchar ();
    return 0;
}