#include <stdio.h>

void main() {
    int a, b;

   
    printf("\n Enter the first number : ");
    scanf("%d", &a);
    printf("\n Enter the second number : ");
    scanf("%d", &b);

   
    a = a + b;
    b = a - b; 
    a = a - b; 

    printf("\n -------------------------------");
    printf("\n First number : %d", a);
    printf("\n Second number : %d", b);

}
