#include<stdio.h>
int main()
{
int a[10];
int i;
int greatest;
printf("enter ten numbers");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
greatest=a[10];
for(i=0;i<10;i++)
{
if(a[i]>greatest)
{
greatest=a[i];
}
}
printf("greatest number is %/d",greatest);
return 0;
}
