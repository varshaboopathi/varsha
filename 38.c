#include<stdio.h>
void main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("a is big");
}
else
{
printf("c is big");
}
}
elseif(b>c)
{
printf("b is big");
}
else
{
printf("c is big");
}
}
