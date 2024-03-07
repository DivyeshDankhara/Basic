#include <stdio.h>

int main()
{
    int a=1,b=2,c=3,d;

    (a>b&&a>c) ? printf("A is grater") : ( (b>c&&b>a) ? printf("B is grater") : printf("C is larger"));
   
    return 0;
}