// A
// AB
// ABC
// ABCD
// ABCDE
#include <stdio.h>
int main()
{
    int n,i,j;

    printf("Enter the number of Rows :-> ");
    scanf("%d",&n);
    //A or n=65
    for(i='A';i<n+'A';i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
    
}