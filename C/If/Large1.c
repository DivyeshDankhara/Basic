#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the value of A :-> ");
    scanf("%d",&a);
    printf("Enter the value of B :-> ");
    scanf("%d",&b);
    printf("Enter the value of C :-> ");
    scanf("%d",&c);

    if(a>b&&a>c)
    {
        printf("A is Large");
    }
    else if(b>a&&b>c)
    {
        printf("B is Large");
    }
    else
    {
        printf("C is Large");
    }

    return 0;
}