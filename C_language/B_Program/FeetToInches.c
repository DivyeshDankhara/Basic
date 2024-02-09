#include <stdio.h>

int main()
{
    int feet,inches=12,total;

    printf("Enter the Feet :-> ");
    scanf("%d",&feet);

    total = feet * inches;

    printf("Feet to Inches is :-> %d",total);

    return 0;
}