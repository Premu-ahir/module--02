#include <stdio.h>

void main()
{
    int students;
    int apples = 5;
    int totalApples;


    printf("Enter the number of students: ");
    scanf("%d", &students);

    totalApples = students * apples;

    printf("\n Total number of apples : %d", totalApples);

}
