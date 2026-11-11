#include <stdio.h>

void clearBuffer(void) {
    int x;
    while ((x = getchar()) != '\n' && x != EOF);
}

int getMenu(void) {
    int rs;
    char last;
    while (1) {
        printf("Chosse an operation: ");
        if (scanf("%d%c", &rs, &last) == 2 && last == '\n') {
            if (rs >= 1 && rs <= 3) {
                return rs;  //return
            }
        } else {
            clearBuffer();
        }
    }
}

int isLeapYear(int y) {
    if (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int isValidDate (int d, int m , int y) {
    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (d >= 1 && d <= 31) {
            return 1;
        }
        break;

        case 4: case 6: case 9: case 11:
        if (d >= 1 && d <= 30) {
            return 1;
        }
        break;

        case 2:
        if (isLeapYear(y)) {
            if (d >=1 && d <= 29) {
                return 1;
            }
        } else {
            if (d >= 1 && d <= 28) {
                return 1;
            }
        }
        break;

        default:
            return 0;
    }
    return 0;
}

void printCharsDesc(char c1, char c2) {
    if (c1 < c2) {
        int tmp;
        tmp = c1;
        c1 = c2;
        c2 = tmp;
    }

    int flag = 0;
    while (flag == 0) {
        char rs = c1;
        printf("%c:  %d, %Xh", rs, rs, rs);
        rs++;
        if (rs == c2 + 1) {
            flag = 1;
        }
    }
}

int main(void) {
    printf("1- Processing date data\n");
    printf("2- Character data\n");
    printf("3- Quit\n");
    int n = getMenu();
    
    int d, m, y, count;
    char last; 
    char c1, c2;
    switch (n) {
        case 1:
            do {
                printf("Enter day, month, year: ");
                count = scanf("%d%d%d%c", &d, &m, &y, &last);
            } while (count != 4 || last != '\n');

            if (isValidDate(d, m, y)) {
                printf("This date is valid");
            } else {
                printf("This date is not valid");
            }

            break;
        
        case 2:
            do {
                last = 0;
                count = 0;
                printf("Enter character ");
                count = scanf("%c%c%c", &c1, &c2, &last);
            } while (count != 3 || last != '\n');
            
            printf("\n");
            printCharsDesc(c1, c2);

            break;
        case 3:
            printf("Thank you!");
            break;
    }

    return 0;
}