#include<stdio.h>  
int main() 
{ 
char str[80]; 
int count,n=0; 
printf("Enter the string containing both digits and a
alphabet \n");
scanf("%s", str); 
for(count=0;str[count]!='\0';count++) 
{
 if((str[count]>='0') && (str[count]<='9'))
{ 
n+=1; 
} 
} 
printf("No of Digits in the string=%d\n",n);
return 0;
 }
