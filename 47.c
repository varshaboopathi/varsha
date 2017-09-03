#include<stdio.h>
int main()
{
int i,n;
float arr[100];
scanf("%d",&n);
for(i=0;i<n;++i)
{
printf("enter number %d",i+1);
scanf("%f",&arr[i]);
}
for(i=1;i<n;++i)
{
if(arr[0]<arr[i])
arr[0]=arr[i])
printf(largest number=%.2f",arr[0]);
}
else
{
if(arr[0]>arr[i])
(arr[0]=arr[i])
printf("smallest number=%.2f",arr[0]);
}
}
