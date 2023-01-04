#include <stdio.h>
 
int main() {
    double num1, num2, num3;
    scanf("%lf%lf%lf", &num1, &num2, &num3);
    double calc = (num1/10 * 2) + (num2/10 * 3) + (num3/10 * 5);
    printf("MEDIA = %.1lf\n", calc);
    return 0;
}