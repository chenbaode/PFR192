#include <stdio.h>
#include <string.h>
typedef struct {
    char name[20];
    int age;
} person;

int main() {
    person family[3];

    strcpy(family[0].name, "John"); family[0].age = 30;
    strcpy(family[1].name, "Sara"); family[1].age = 28;
    strcpy(family[2].name, "David"); family[2].age = 3;

    printf("Father -> Name: %s, Age: %d\n", family[0].name, family[0].age);
    printf("Mother -> Name: %s, Age: %d\n", family[1].name, family[1].age);
    printf("Son -> Name: %s, Age: %d\n", family[2].name, family[2].age);

    return 0;
}