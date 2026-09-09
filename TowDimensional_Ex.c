#include <stdio.h>

int calculateSum(int rows, int cols, int arr[rows][cols]);
void printMatrix(int rows, int cols, int arr[rows][cols]);

int main(void) {
    int m, n;
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);
    int array[m][n];
    printf("Enter the elements of the %dx%d array:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nMatrix:\n");
    printMatrix(m, n, array);
    int sum = calculateSum(m, n, array);
    printf("\nSum of all elements: %d\n", sum);
    return 0;
}

int calculateSum(int rows, int cols, int arr[rows][cols]) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

void printMatrix(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0 ; j < cols; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
}