#include <stdio.h>

int main()
{
    char n;

    printf("Enter the Character :-> ");
    scanf("%c",&n);

    if (n>=65&&n<=90)
    {
        printf("%c :--> %c",n,n+32);
    }
    else if(n>=97&&n<=122)
    {
        printf("%c :--> %c",n,n-32);
    }
    else
    {
        printf("Invalid Input");
    }
    
    return 0;
}