#include <stdio.h>

int main()
{
    int a[50],n,temp;

    printf("Enter the Rows :-> ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("a[%d] :-> ",i);
        scanf("%d",&a[i]);
    }
    temp = a[0];
    a[0] = a[n-1];
    a[n-1] = temp;
    printf("==========================");
    for(int i=0;i<n;i++)
    {
        printf("a[%d] :-> %d\n",i,a[i]);
    }

    return 0;
}