// A
// bc
// DEF
// ghij
// KLMNO
#include <stdio.h>
int main()
{
    int n,i,j,a=65;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==1)
            {
                printf("%c ",a);
            }
            else
            {
                printf("%c ",a+32);
            }
            a = a + 1;
        }
        printf("\n");
    }
    return 0;

}