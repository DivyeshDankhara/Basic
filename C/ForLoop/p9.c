// A 
// B C 
// D E F 
// G H I J 
// K L M N O 
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
            printf("%c ",a);
            a+=1;
        }
        printf("\n");
    }
    
    return 0;
}