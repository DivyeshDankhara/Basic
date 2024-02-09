#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    int i=n;
    do
    {
        printf("%d\n",n);
        n--;
    } while (n>=1);
    
    return 0;
}