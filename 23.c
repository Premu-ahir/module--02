#include <stdio.h>

void main() {
    int a, b;

    printf("\n Enter the first number : ");
    scanf("%d", &a);
    printf("\n Enter the second number : ");
    scanf("%d", &b);

    if (a == 0 || b == 0)
    {
        printf("\n wrong input");
    }

    a = a * b; 
    b = a / b; 
    a = a / b;  

    printf("\n ------------------------------");
    printf("\n First number : %d", a);
    printf("\nSecond number : %d", b);

}
