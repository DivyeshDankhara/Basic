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
    int*e;
    *e=*c;
    *c=*d;
    *d=*e;

    printf("Value of A :-> %d\n",a);
    printf("Value of B :-> %d",b);
}