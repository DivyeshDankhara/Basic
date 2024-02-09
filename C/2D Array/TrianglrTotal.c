#include <stdio.h>
int main()
{
    int a[10][10],i,j,r,c,total=0,utotal=0,ltotal=0;

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
            printf("%d ",a[i][j]);
            if(i==j)
            {
                total = total + a[i][j];
            }
            else if(i<j)
            {
                utotal = utotal + a[i][j];
            }
            else if(i>j)
            {
                ltotal = ltotal + a[i][j];
            }
        }
        printf("\n");
    }
  
    printf("Diagonal element Total :-> %d\n",total);
    printf("upper triangle Total :-> %d\n",utotal);
    printf("lower riangle Total :-> %d",ltotal);

return 0;
}