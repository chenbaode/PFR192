#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char name[30];
    double grade;
} Student;

void showStudent(Student sv) {
    printf("%-5d %-25s %5.2f", sv.id, sv.name, sv.grade);
    printf("\n");
}
int main() {
    int n;
    Student sv1;
    sv1.id = 1;
    strcpy(sv1.name, "Vu Van Huy");
    sv1.grade = 8.5;
    showStudent(sv1);

    Student sv2 = {2, "Chen Baode", 9.5};
    Student sv3 = {2, "Nguyen Thi Trang Nhung", 9.5};
    showStudent(sv2);
}