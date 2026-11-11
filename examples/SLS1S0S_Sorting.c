#include <stdio.h>

void sortInRange (int a[], int n, int pos1, int pos2) {
    int i;
    int j;
    int temp;
    for (i = pos1; i < pos2; i++) {
            int minIndex = i;
        for (j = i + 1; j <= pos2; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = a[i];
            a[i] = a[minIndex];
            a[minIndex] = temp;
        }
    }
}

int getMax(int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int getMin(int a[], int n) {
    int i, max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
    }
    return max;
}

int getPos (int a[], int n, int x, int theK) {
    int i, count = 0, pos = -1;
    if (theK < 0 || theK >= n) return pos;
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            count++;
            if (count == theK) {
                pos = i; break;
            }
        }
    }
}

int main() {

}