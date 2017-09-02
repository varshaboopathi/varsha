#include<stdio.h>
void main()
{
int i,n,t1=0,t2=1,nextterm;
scanf("%d",&n);
printf9fibonacci series");
for(i=1;i<=n;++i)
{
printf("%d",t1);
nextterm=t1+t2;
t1=t2;
t2=nextterm;
}
return 0;
}
