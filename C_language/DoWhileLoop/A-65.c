#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    int i='A';
    do
    {
        printf("%c-%d\n",i,i);
        i++;
    } while (i<='Z');
    
    return 0;
}