
#include <stdio.h>
void main()
{
   float pi=3.14;
   int a,r,c;
   
   printf("\n Enter radius of circle: ");
   scanf("%d",&r);
   
   a=pi*r*r;
   
   printf("area of circle is:%d ",a);
   
   printf("\n___________________________________");
   
    printf("\n Enter redius of circle: ");
   scanf("%d",&r);
   
   c=2*(pi*r);
   
   printf("circumference of circle is:%d ",c);
   
   
}