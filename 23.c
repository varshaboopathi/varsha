#include<stdio.h>
int hcf(int,int);
int main()
{
int a,b,result;
scanf("%d%d',&a,&b);
result=hcf(a,b);
printf("hcf of %d and %d are%d",a,b,result);
return 0;
}
int hcf(int a,intb)
{
while(a!=b)
{
if(a>b)
{
a=a-b;
}
else
{
b=b-a;
}
}
return a;
}
