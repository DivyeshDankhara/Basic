// * * * * * * * * * * *
// * * * * *   * * * * *
// * * * *       * * * *
// * * *           * * * 
// * *               * *
// *                   *
// * *               * *
// * * *           * * * 
// * * * *       * * * *
// * * * * *   * * * * *
// * * * * * * * * * * *
#include <stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the rows :-> ");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-i<j&&j<i)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=-n;j<=n;j++)
        {
            if(-(n-i-1)<j&&j<(n-i-1))
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}   