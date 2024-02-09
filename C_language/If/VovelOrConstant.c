#include <stdio.h>

int main()
{
    char n;

    printf("Enter character you check vovel or constant :-> ");
    scanf("%c",&n);

    if(n==65||n==69||n==73||n==79||n==85||n==97||n==101||n==105||n==111||n==117)
    {
        printf("%c is vovel",n);
    }
    else
    {
        printf("%c is constant",n);
    }

    return 0;
}