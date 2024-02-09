//  1  1  1  1  1
//  3  3  3  3  3
//  5  5  5  5  5
//  7  7  7  7  7
//  9  9  9  9  9
#include <stdio.h>
int main()
{
    int i,j,n,a=1;
    
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