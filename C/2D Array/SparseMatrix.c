#include <stdio.h>
int main()
{
    int a[10][10],i,j,r,c;

    printf("Entre the Rows :-> ");
    scanf("%d",&r);
    printf("Enter the colums :-> ");
    scanf("%d",&c);

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("a[%d][%d] :-> ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==0)
            {
                printf("  ");
            }
            else
            {
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}