#include <stdio.h>
void main()
{
    long a, temp, digit, b= 0;
    printf("Enter the number \n");
    scanf("%ld", &a);
    temp = a;
    while (a > 0)
    {
        digit = a % 10;
        b = b+ digit;
        a /= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, b);
}
