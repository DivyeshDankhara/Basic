#include <stdio.h>
int main()
{
    float n,a=0.5,b=0.5,c,i;

    printf("Enter the Number :-> ");
    scanf("%f",&n);
    printf("%.2f\n",a);

    for(i=1;i<n;i++)
    {
        c = a + b ;
        printf("%.2f\n",c);
        a = c;
        b = b + 1;
    }
    return 0;
}