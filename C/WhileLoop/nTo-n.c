#include <stdio.h>
int main()
{
    int i,n;

    printf("Enter the Number :-> ");
    scanf("%d",&n);

    i=-n;
    while (i<=n)
    {
        printf("%d,",i);
        i++;
    }
    return 0;
}