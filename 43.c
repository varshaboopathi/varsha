#include<stdio.h>
void main()
{
char a[24],b[567];
int i=0,j=0;
scanf('%s %s",a,b);
while(a[i]!='\0')
i++;
while(b[i]!='\0')
{
a[i]=b[j];
j++;
i++;
}
a[i]='\0';
printf("%s",a);
}
