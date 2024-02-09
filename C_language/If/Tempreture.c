#include<stdio.h>
int main()
{
    float celsius,fahrenheit,n,temp;

    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");

    printf("Enter the no you want to convert :->");
    scanf("%f",&n);

    if(n==1)
    {
        printf("Enter the Fahrenheit :-> ");
        scanf("%f",&fahrenheit);

        temp=(fahrenheit-32)*5/9;

        printf("%f Fahrenheit to Celsius :-> %f",fahrenheit,temp);
    }
    else
    {
        printf("Enter the Celsius :-> ");
        scanf("%f",&celsius);

        temp=celsius*9/5+32;

        printf("%f Celsius to Fahrenheit :-> %f",celsius,temp);
    }

    return 0;
}