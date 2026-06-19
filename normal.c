#include <stdio.h>
 int main(void) 
 {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
     if (a > 0)
     {
        printf("You entered a positive integer: %d\n", a);
    }
    else if (a < 0)
    {
        printf("You entered a negative integer: %d\n", a);
    }
    else
    {
        printf("You entered zero.\n");
    }
     return 0;
 }
 