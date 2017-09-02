#include<stdio.h>
void main()
{
int n,a=0,b,c;
scanf("%d",&n);
c=n;
while(n!=0)
{
remainder=n%10;
a=a*10+b;
n/=10;
}
if(c==a)
{
printf("%d is palindrome",c);
]
else
{
printf("%d is not a palindrome",c);
}
return 0;
]
