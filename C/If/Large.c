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

    if(a>b)
    {
        if(a>c)
        {
            printf("A is Large");
        }
    }
    else if (b>c)
    {
        if(b>a)
        {
            printf("B is Large");
        } 
    }
    else
    {
        printf("C is Large");
    }
    
    return 0;
}