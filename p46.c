 #include <stdio.h>

void main() {
    int no1, no2, no3;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &no1, &no2, &no3);

    
    int min = (no1 < no2) ? ((no1 < no3) ? no1 : no3) : ((no2 < no3) ? no2 : no3);

    
    printf("The minimum number is: %d\n", min);

    
}
