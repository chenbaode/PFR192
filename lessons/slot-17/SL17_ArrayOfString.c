#include <stdio.h>
#define MAX 50
void input(char str[][MAX], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("str[%d] = ", i); scanf("%[^\n]", str[i]);
        getchar();
    }
}

void display(char str[][MAX], int n) {
    int i;
    for (i = 0; i < n; i++) {
        if (i < n - 1) {
            printf("%s, ", str[i]);
        } else {
            printf("%s", str[i]);
        }
    }
    printf("\n");
}

void searchContaining (char S[][MAX])

int main() {
    int n;
    scanf("%d", &n);
    char S[n][MAX];
    getchar();
    input(S, n);
    display(S, n);

    char S2[][MAX] = {"Tuan", "Nam", "Minh", "An", "Ha"};
    display(S2, 5);


    return 0;
}