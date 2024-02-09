#include <stdio.h>
int main()
{
    int i;

    i='A';
    while (i<='Z')
    {
        if(i%2==1)
        {
            printf("%c,",i);
        }
        i++;
    }
    return 0;
}