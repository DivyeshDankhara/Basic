#include<stdio.h>
int main()
{
    int n;

    printf("Enter the year are you old :-> ");
    scanf("%d",&n);

    if(n>18)
    {
        printf("You Eligible For Voting");
    }
    else
    {
        printf("You Not Eligible For Voting");
    }
    
    return 0;
}