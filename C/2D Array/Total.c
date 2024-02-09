#include <stdio.h>
int main()
{
    int a[10][10],i,j,total=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d] :-> ",i,j);
            scanf("%d",&a[i][j]);

            total = total + a[i][j]; 
        }
    }
    printf("Total is :-> %d",total);
    return 0;
}