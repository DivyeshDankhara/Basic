#include <stdio.h>
int main()
{
    int n;

    printf("Enter the number :-> ");
    scanf("%d",&n);

    int i='A';
    do
    {
        printf("%c\n",i);
        i++;
    } while (i<='Z');
    
    return 0;
}