// A
// B A
// C B A
// D C B A
// E D C B A
#include <stdio.h>
int main()
{
    int n,a='A',i,j;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c ",a-j);
        }
        a++;
        printf("\n");
    }

    return 0;
}