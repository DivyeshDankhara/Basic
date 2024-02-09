#include <stdio.h>
int main()
{
    int i,n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        break;
    }
    if(i==n)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }

    return 0;
}