#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    int i='A';
    do
    {
        printf("%c-%c\n",i,i+32);
        i++;
    } while (i<='Z');
    
    return 0;
}