#include <stdio.h>
int main()
{
    int i,n,a=1;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    i=1;
    while (i<=n)
    {
        printf("%d\n",a);
        a = a*2;
        i++;
    }
    return 0;
}