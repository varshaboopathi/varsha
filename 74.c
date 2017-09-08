#include<stdio.h>
#include<conio.h>
void main()
{
float n;
int i;
clrscr();
printf("\nEnter the Value\n\n");
scanf("%f",&n);
i=(n<0)?n-0.5:n+0.5;
printf("\nRound up value= %d",i);
getch();
}
