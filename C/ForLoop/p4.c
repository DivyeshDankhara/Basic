// 1
// 23
// 456
// 78910
#include <stdio.h>
int main()
{
    int n,i,j,a=1;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=1;
        }
        printf("\n");
    }

    return 0;
}