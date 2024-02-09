#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of A :-> ");
    scanf("%d",&a);
    printf("Enter the value of B :-> ");
    scanf("%d",&b);
    int*c=&a;
    int*d=&b;
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    printf("value of A :-> %d\n",a);
    printf("Value of B :-> %d",b);
}