#include<stdio.h>
int main()
{
int x,y,temp;
scanf("%d%d",&x,&y);
printf("before swapping x=%d,y=%d",x,y);
temp=x;
x=y;
y=temp;
printf(after swapping x=%dy=%d,x,y);
return 0;
}
