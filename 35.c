#include<stdio.h>
int main()
{
char str[100];
int countspecialchar;
int counter;
countspecialchar=0;
scanf("%s",&str);
for(counter=0;str[counter]!=NULL;counter++)
{
countspecialchar++;
}
printf("digits:%d special characters",countspecialchar);
return 0;
}
