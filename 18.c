#include <stdio.h>

void main() {
    double monthly_s;
    double annual_s;

    printf("Enter persons monthly salary: ");
    scanf("%lf", &monthly_s);

    annual_s = monthly_s * 12;

    
    printf("\n  annual salary is: %.2f", annual_s);

}
