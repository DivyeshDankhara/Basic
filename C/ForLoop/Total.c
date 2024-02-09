#include <stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the Number :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=i;
    }

    printf("Sum of Number :-> %d",sum);
    
    return 0;
}