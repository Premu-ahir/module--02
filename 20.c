#include <stdio.h>

void main() {
    double monthly_s,salary;
    double premium, installment;
   
    printf("Enter your monthly salary: ");
    scanf("%lf", &monthly_s);

    
    premium = monthly_s * 0.10;

   installment = monthly_s * 0.10;

    salary = monthly_s - (premium + installment);

    printf("\n Monthly Salary: %.2f", monthly_s);
    printf("\n Insurance Premium : %.2f", premium);
    printf("\n Loan Installment : %.2f", installment);
    printf("\n Remaining Salary: %.2f", salary);

}
