#include <stdio.h>
int main()
{
    int i,n,sum;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }

    printf("Sum of evev Number :-> %d",sum);
    
    return 0;
}