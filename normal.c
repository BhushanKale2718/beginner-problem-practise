#include <stdio.h>

int main(void)
{
int number;
int count = 0;
printf("Enter a positive integer: ");
scanf("%d", &number);   
while (number != 0) 
{ 
    number = number / 10;
    count++;
}
 printf("Number of digits: %d\n", count);
return 0;
}