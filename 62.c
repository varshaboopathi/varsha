#include <stdio.h>
#include <conio.h>
long decimalToBinary(long n);
int main()
{
    long deci;
    printf("Enter a decimal number\n");
    scanf("%ld", &deci);
    printf("Binary number of %ld is %ld", deci, deciToBinary(deci));
 getch();
    return 0;
}
long decimalToBinary(long n)
{
    int remainder; 
 long binary = 0, i = 1;
  while(n != 0) 
  {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    return binary;
}
