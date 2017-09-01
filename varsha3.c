#include<stdio.h>
void main()
{
    char c;
    int b,v;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
     b= (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='U');
    v = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (b||v)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
