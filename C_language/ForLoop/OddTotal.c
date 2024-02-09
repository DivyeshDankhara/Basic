#include <stdio.h>
int main()
{
    int i,n,sum;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum+=i;
        }
    }

    printf("Sum of odd Number :-> %d",sum);
    
    return 0;
}