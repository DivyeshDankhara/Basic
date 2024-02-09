//  2  2  2  2  2
//  4  4  4  4  4
//  6  6  6  6  6
//  8  8  8  8  8
// 10 10 10 10 10
#include <stdio.h>
int main()
{
    int i,j,n,a=2;
    
    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%2d ",a);
        }
        a+=2;
        printf("\n");
    }

    return 0;
}