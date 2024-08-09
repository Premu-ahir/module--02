#include<stdio.h>

void main()
{
    int a,b,h;
    
    printf("\n enter base of triangle: ");
    scanf("%d",&b);
    
     printf("\n enter height of triangle: ");
    scanf("%d",&h);
    
    printf("\n__________________________________");
    
    a=0.5*b*h;
    printf("\n Area of triangle is: %d",a);
    
}
