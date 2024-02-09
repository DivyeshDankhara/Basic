#include <stdio.h>
int main()
{
    int i,n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    while (n>=1)
    {
        printf("%d,",n--);
    }

    return 0;
}