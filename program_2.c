#include <stdio.h>

int main(void)
{
    int n;
    int pa = 9000000;
    int pd = 3600000;
    double income;

    printf("Enter your income: ");
    scanf("%lf", &income);
    printf("Enter n dependents: ");
    scanf("%d", &n);

    int tf = 12*(pa + n*pd);
    double ti = income - tf;

    if (ti <= 0) {
        printf("Income tax = 0\n");
    } else {
        double resultTex = 0;
        double maxL1 = 5000000 * 5 / 100;
        double maxL2 = 5000000 * 10 / 100;
        double maxL3 = 8000000 * 15 / 100;

        if (ti <= 5000000) {
            resultTex = ti * 5 / 100;
        } else if (ti <= 10000000) {
            resultTex = maxL1 + (ti - 5000000) * 10 / 100;
        } else if (ti <= 18000000) {
            resultTex = maxL1 + maxL2 + (ti - 10000000) * 15 / 100;
        } else {
            resultTex = maxL1 + maxL2 + maxL3 + (ti - 18000000) * 20 / 100;
        }
        printf("Income tax = %lf\n", resultTex);
    }

    return 0;
}