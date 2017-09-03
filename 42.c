#include<stdio.h>
int main()
{
char a[56],b[56];
int i;
scanf("%s %s",a,b);
i=0;
while(a[i]==b[i]&&a[i]!='\0')
i++;
if(a[i]>b[i])
{
printf("a>b");
}
elseif(a[i]<b[i])
{
printf("a<b");
}
else
{
printf("a=b");
}
return 0;
}
