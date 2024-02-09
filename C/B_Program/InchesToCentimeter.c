#include <stdio.h>

int main()
{
    float inches,centimeter=2.54,total;

    printf("Enter the Feet :-> ");
    scanf("%f",&inches);

    total = inches * centimeter;

    printf("Inches to Centimeter is :-> %f",total);

    return 0;
}