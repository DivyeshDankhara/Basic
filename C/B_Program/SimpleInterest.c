#include <stdio.h>

int main()
{
    float principal,rate,time,simpleinterest;

    printf("Enter the principal amount :-> ");
    scanf("%f",&principal);
    printf("Enter the interest rate :-> ");
    scanf("%f",&rate);
    printf("Enter the time in years :-> ");
    scanf("%f",&time);

    simpleinterest = principal * rate * time / 100;

    printf("The simple interest is :-> %f",simpleinterest);

    return 0;
}