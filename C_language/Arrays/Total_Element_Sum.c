#include <stdio.h>
int main()
{
    int i,a[10],sum=0;

    for(i=0;i<10;i++)
    {
        printf("Enter the value a[%d] :-> ",i);
        scanf("%d",&a[i]);

        sum+=a[i];
    }
    printf("Sum of :-> %d",sum);
    return 0;
}