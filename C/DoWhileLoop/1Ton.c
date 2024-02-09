#include <stdio.h>
int main()
{
    int n,i;

    printf("Enter the number :-> ");
    scanf("%d", &n);

    i=1;
    do
    {
        printf("%d,",i);
        i++;
    } while (i<=n);
    
    return 0;
}