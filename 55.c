#include <stdio.h>
int main(void)
{
    char c[30];
    int arr_size, result, i=0, state;
    printf("Enter your digit:= ");
    scanf("%s",&c);
    arr_size=(sizeof(c)/sizeof(c[0]));
    for(i; i < arr_size; i++)
    {
        if(check_digit(c[i]))
        state = yes;
        else
        state = no;
    }
    if(!state)
        printf("It's not a digit\n");
    else
        printf("It's a digit\n");

    system("\npause");
    return 0;
}

int check_digit(char c)
{
    return (c>='0' && c<='9');
}
