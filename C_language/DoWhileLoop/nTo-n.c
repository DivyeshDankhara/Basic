#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    int i=-n;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}