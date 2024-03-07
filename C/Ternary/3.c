#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Enter value of A :-> ");
    scanf("%d",&a);
    printf("Enter value of B :-> ");
    scanf("%d",&b);
    printf("Enter value of C :-> ");
    scanf("%d",&c);


    (a>b) ? ((a>c) ? printf("A is big") : printf("C is big")) : ((b>c) ? printf("B is big") : printf("C is big"));

    return 0;
}