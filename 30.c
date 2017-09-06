#include<stdio.h>
int main()
{
int a,i,sum=0,add=0;
scanf("%d",&a);
for(i=1;i<=15;i++)
{
add+=i;
}
printf("the sum of numbers betwwn 1 and 15 is %d",add);
while(a<=45)
{
if(a%3==0)
{
sum+=a;
}
a++;
}
printf("odd numbers between 15 and 45 is %d",sum);
return 0;
}
