#include <stdio.h>
int main()
{
    int n,sum=0;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    int i=1;
    do
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
        i++;
    } while (i<=n);
    
    printf("Sum of Odd Number :-> %d",sum);
    return 0;
}