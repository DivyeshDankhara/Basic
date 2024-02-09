#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter the valur of A :-> ");
    scanf("%d",&a);
    printf("Enter the valur of B :-> ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("Value of A :-> %d\n",a);
    printf("Value of B :-> %d",b);

    return 0;
}