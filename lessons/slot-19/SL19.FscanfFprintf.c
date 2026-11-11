#include <stdio.h>
#include <stdlib.h>
#define MAX 10

void display(int a[][MAX], int r, int c) {
    int i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d", a[i][j]);
            if (j < c - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(void) {
    FILE *fin;

    fin = fopen("/Users/tranbaoduc/Downloads/SL19.txt", "r");
    if (fin == NULL) {
        perror("Cannot open SL19.txt");
        return EXIT_FAILURE;
    }

    int m, n;
    int a[MAX][MAX];
    if (fscanf(fin, "%d %d", &m, &n) != 2 ||
        m < 1 || m > MAX || n < 1 || n > MAX) {
        fprintf(stderr, "Expected row and column counts from 1 to %d.\n", MAX);
        fclose(fin);
        return EXIT_FAILURE;
    }

    int i, j;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (fscanf(fin, "%d", &a[i][j]) != 1) {
                fprintf(stderr, "Expected an integer at row %d, column %d.\n",
                        i + 1, j + 1);
                fclose(fin);
                return EXIT_FAILURE;
            }
        }
    }
    fclose(fin);

    printf("m = %d, n = %d\n", m, n);
    display(a, m, n);
    return EXIT_SUCCESS;
}
