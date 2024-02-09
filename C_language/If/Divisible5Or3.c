#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number :-> ");
    scanf("%d",&num);

    if (num%5==0 && num%3==0)
    {
        printf("The number is divisible by 5 or 3.");
    }
    else
    {
        printf("The number is not divisible by 5 or 3.");
    }

    return 0;
}