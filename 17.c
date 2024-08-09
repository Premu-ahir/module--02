#include <stdio.h>

void main() {
    double salary;
    double premium;
    double rate1 = 0.05; 
    double rate2 = 0.10; 
    double rate3 = 0.15; 
    double first_s = 30000; 
    double second_s = 60000;

    
    printf("Enter the salary: ");
    scanf("%lf", &salary);

    if (salary <= first_s) {
        premium = salary * rate1;
    } else if (salary <= second_s) {
        premium = salary * rate2;
    } else {
        premium = salary * rate3;
    }

    printf(" \n The insurance premium based on a salary is %.2f", premium);

}
