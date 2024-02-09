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

    for(i=1;i<=n;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }

        for(j=1;j<=n+1-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}