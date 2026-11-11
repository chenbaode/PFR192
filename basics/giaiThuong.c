#include <stdio.h>

int main() {
    int n;
    printf("Nhap giai thuong ban nhan duoc: ");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("Ban dat giai nhat, gia tri giai thuong 1.000.000\n");
            break;
        case 2:
            printf("Ban dat giai nhi, gia tri giai thuong 500.000\n");
            break;
        case 3:
            printf("Ban dat giai ba, gia tri giai thuong 200.000\n");
            break;
        case 4:
            printf("Ban dat giai khuyen khich, gia tri giai thuong 50.000\n");
            break;
        default:
            printf("Chuc ban may man lan sau.\n");
    }

    return 0;
}