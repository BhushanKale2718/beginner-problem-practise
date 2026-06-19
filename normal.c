#include <stdio.h>
 int main(void)
 {
    int a, b;
    printf(" First Number: ");
    scanf("%d", &a);
    printf(" Second Number: ");
    scanf("%d", &b);
    if (a >b)
    {
        printf(" %d is greater than %d\n", a, b);
    }
    else if (a < b)
    {
        printf(" %d is less than %d\n", a, b);
    }
    else
    {
        printf(" %d is equal to %d\n", a, b);
    }
 }
 