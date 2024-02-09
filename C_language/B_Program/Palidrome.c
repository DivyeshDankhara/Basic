#include <stdio.h>
int main()
{
    int n,rev=0,a,p;

    printf("Enter the number :-> ");
    scanf("%d",&n);
    p=n;

    while(n!=0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }

    if(p==rev)
    {
        printf("%d is palidrome",p);
    }
    else
    {
        printf("%d is Not palidrome",p);
    }

    return 0;    
}