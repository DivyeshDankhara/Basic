#include <stdio.h>
int main()
{
    int i,n;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    i=1;
    while (i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n",i*i);
        }
        else
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}