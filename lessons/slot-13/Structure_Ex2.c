#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[20];
    int grade;
} student;

void printStudent(student s) {
    printf("Id: %d, Name: %s, Grade: %c\n", s.id, s.name, s.grade);
}

int main() {
    student s1;
    s1.id = 1001;
    strcpy(s1.name, "Tom");
    s1.grade = 'A';
    printf("Student Ìnormation:\n");
    printStudent(s1);

    return 0;
}