// 1
// 0 1
// 0 1 0
// 1 0 1 0
// 1 0 1 0 1
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
            if(a==1)
            {
                a = a-1;
            }
            else if(a==0)
            {
                a = a+1;
            }
        }
        
            printf("\n");
    }
    
    return 0;
}