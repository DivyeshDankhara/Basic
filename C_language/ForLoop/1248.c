#include <stdio.h>
int main()
{
    int i,n,a=1;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a = a * 2;
    }
    return 0;
}