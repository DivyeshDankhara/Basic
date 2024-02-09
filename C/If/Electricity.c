#include <stdio.h>

int main()
{
    float n;

    printf("Enter the Electicity Unit :-> ");
    scanf("%f", &n);

    if(n<=100)
    {
        n=(n*0.60)+50;
        if(n>300)
        {
            n=n+(n*0.15);
        }
    }
    if(n<=200)
    {
        n=(60+((n-100)*0.80))+50;
        if(n>300)
        {
            n=n+(n*0.15);
        }
    }
    if(n>200)
    {
        n=(140+((n-200)*0.90))+50;
        if(n>300)
        {
            n=n+(n*0.15);
        }
    }

    printf("The Electicity Bill is :-> %f",n);

    return 0;
}