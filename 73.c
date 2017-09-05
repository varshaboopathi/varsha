#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int n, ran;
    printf("Enter number of random numbers\n");
    scanf("%d", &n);
    printf("%d random numbers between 0 to 1000\n", n);
    while(n--)
    {
        ran = rand()%1000 + 1;
        printf("%d\n", ran);
    } 
    getch();
    return 0;
}
