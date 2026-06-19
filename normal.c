#include <stdio.h>

int main()
{
    int a, digit, reverse = 0;

printf("Enter a number: ");
scanf("%d", &a);

    while(a > 0)
    {
        digit = a % 10;
        a = a / 10;
        reverse = reverse * 10 + digit;
    }
    printf("Reverse of the number is: %d\n", reverse);
    return 0;
}
reverse = reverse * 10 + digit; 
