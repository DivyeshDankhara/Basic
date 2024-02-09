#include <stdio.h>
int main()
{
    int i,n,sum=0;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    i=1;
    while(i<=n)
    {
        if(i%2==1)
        {
            printf("%d ",i);
            sum = sum + i;
        }
        i++;
    }

    printf("\nSum of :-> %d",sum);
    return 0;
}