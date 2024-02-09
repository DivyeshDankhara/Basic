// 11 12 13 14 15
// 21 22 23 24 25
// 31 32 33 34 35
// 41 42 43 44 45
// 51 52 53 54 55
#include <stdio.h>
int main()
{
    int i,j,n,a=11,b;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {   
        b=a;
        for(j=1;j<=n;j++)
        {
            printf("%d ",b++);
        }
        a+=10;
        printf("\n");
    }

    return 0;
}