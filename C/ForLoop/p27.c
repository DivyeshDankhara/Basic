// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y
#include <stdio.h>
int main()
{
    int i,j,n,a=65;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",a++);
        }
        printf("\n");
    }

    return 0;
}