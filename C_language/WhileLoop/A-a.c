#include <stdio.h>
int main()
{
    int n='Z',i='A';

    while (i<=n)
    {
        printf("%c-%c\n",i,i+32);
        i++;
    }
    
    return 0;
}