#include<stdio.h>
#include<stdlib.h>
int char ch;
int i;
clrscr();
void main()
{
while(1)
{
for(i=1;i<=5;i++)
{
printf("%/d",i);
}
ch=getch();
if(ch=='Q')
exit(0);
}
getch();
}
