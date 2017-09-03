#include<stdio.h>
#include<string.h>
void swap(int*,int*)
void main()
{
int a,b;
scanf("%d %d",&a,&b);
printf("before swapping a=%d b=%d",a,b);
swap(a,b);
printf("after swapping a=%d b=%d"a,b);
}
void swap(int*x,int*y)
{
*x=*x^*y;
*y=*x^*y;
*x=*x^*y;
}
