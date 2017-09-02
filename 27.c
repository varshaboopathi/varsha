#include<stdio.h>
int main()
{
int n1,n2,n3;
scanf("%d %d",&n1,&n2);
n3=(n1>n2)?n1:n2;
while(1)
{
if(n3%n1==0&&n3%n2==0)
{
printf("the lcm is %d",n1,n2,n3);
break;
}
++n3;
}
return 0;
}
