#include <stdio.h>
int main()
{
    float dollar,rupees=82,total;

    printf("Enter the Dollar :-> ");
    scanf("%f",&dollar);

    total = dollar * rupees;

    printf("Dollar to Rupees is :-> %.f",total);

    return 0;
}