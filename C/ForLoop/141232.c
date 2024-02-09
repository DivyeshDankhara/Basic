#include <stdio.h>
int main()
{
    int i,n,b=1;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",b*i);
        b = b * 2;
    }

    return 0;
}