//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
#include <stdio.h>
int main()
{
    int i,j,k,n;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=0;i<n-1;i++)
    {
        for(k=0;k<=i;k++)
        {
            printf(" ");
        }

        for(j=0;j<n-i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}