#include<stdio.h>

void main()
{
    int a,l,w,h;
    
    printf("\n enter length of rectangular prism : ");
    scanf("%d",&l);
    
    printf("\n enter width of rectangular prism : ");
    scanf("%d",&w);
    
    printf("\n enter height of rectangular prism : ");
    scanf("%d",&h);
    
    printf("\n__________________________________");
    
     a=2*((w*l)+(h*l)+(h*w));
    printf("\n Area of ractangle is: %d",a);
    
}
