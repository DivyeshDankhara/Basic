#include <stdio.h>
int main()
{
    int n='A',i;

    for(i=1;i<=13;i++)
    {
        printf("%c",n);
        if(i%2==1)
        {
            n = n + 34;
        }
        else
        {
            n = n - 30;
        }
    }
    return 0;
}