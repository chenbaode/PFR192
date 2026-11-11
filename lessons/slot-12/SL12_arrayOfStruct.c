#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    float grade;
} Student;

void inputData(Student sv[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("Input ID of student %d: ", i+1);
        scanf("%d", &sv[i].id);
        getchar();

        printf("Input Name of student %d: ", i+1);
        scanf("%[^\n]", sv[i].name);

        printf("Input Grade of student %d: ", i+1);
        scanf("%f", &sv[i].grade);
    }
}

void displayStudentList(Student sv[], int n) {
    int i;
    printf("%-5s %-25s %5s\n", "ID", "NAME", "Grade");
    printf("%-5s %-25s %5s\n", "--", "----", "-----");
    for (i = 0; i < n; i++) {
        printf("%-5d %-25s %5.2f\n", sv[i].id, sv[i].name, sv[i].grade);
    }
}

void sortStudentListByGradeDese(Student sv[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = n - 1; j > i; j--) {
            if (sv[j-1].grade < sv[j].grade) {
                Student tmp;
                tmp = sv[j-1];
                sv[j-1] = sv[j];
                sv[j] = tmp;
            }
        }
    }
}

void displayStudentGradeGTK(Student sv[], int n, int k) {
    int i;
    printf("%-5s %-25s %5s\n", "ID", "NAME", "Grade");
    printf("%-5s %-25s %5s\n", "--", "----", "-----");
    for (i = 0; i < n; i++) {
        if (sv[i].grade > k)
        printf("%-5d %-25s %5.2f\n", sv[i].id, sv[i].name, sv[i].grade);
    }
}

int main() {
    int n;
    do {
        printf("Input number of student: ");
        scanf("%d", &n);
    } while (n <= 0);

    Student sv[n];
    inputData(sv, n);
    displayStudentList(sv, n);
    printf("\n---Sorting---\n");
    sortStudentListByGradeDese(sv, n);
    displayStudentList(sv, n);
    displayStudentGradeGTK(sv, n, 8);
    return 0;

}