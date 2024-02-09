// 5 
// 4 5 
// 3 4 5 
// 2 3 4 5 
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int n,i,j,b;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b = n;
        for(j=1;j<=i;j++)
        {
            printf("%d ",b-i+1);
            b++;
        }
        printf("\n");
    }

    return 0;
}