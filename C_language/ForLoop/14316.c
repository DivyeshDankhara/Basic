#include <stdio.h>
int main()
{
    int i,n,a;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            a = i * i;
            printf("%d\n",a);
        }
        else if(i%2==1)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}