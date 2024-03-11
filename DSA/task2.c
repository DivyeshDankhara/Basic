#include <stdio.h>

int main()
{
    int a[50],n,temp;

    printf("Enter the rows :-> ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("a[%d] :-> ",i);
        scanf("%d",&a[i]);
    }

    for (int i=0;i<n-1;i++)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    printf("======================\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d] :-> %d\n",i,a[i]);
    }

    return 0;
}