//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1
#include <stdio.h>
int main()
{
    int i,j,k,n,a=1;

    printf("Enter the rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf("  ");
        }

        for(j=1;j<i;j++)
        {
            printf("%d ",j);
        }

        for(j=i;j>=1;j--)
        {
           printf("%d ",j);
        }

        printf("\n");
    }
    return 0;
}