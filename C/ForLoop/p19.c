//         *
//       * * *
//     * * * * *
//   * * * * * * *
// * * * * * * * * *
//   * * * * * * *
//     * * * * *
//       * * *
//         *
#include <stdio.h>
int main()
{
    int i,j,k,n;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }

        for(j=1;j<=i*2-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=n;i>1;i--)
    {
        for(k=i;k<=n;k++)
        {
            printf("  ");
        }

        for(j=1;j<2*i-2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}